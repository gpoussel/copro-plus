#include <algorithm>
#include <array>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <map>
#include <numbers>
#include <set>
#include <string>
#include <vector>
using namespace std;

#define nl '\n'
#define deb(x) cerr << #x " = " << x << nl
#define EPSILON 1e-9
#define equals(a, b) (fabs(a - b) < EPSILON)
#define almost_equals(a, b) (fabs(a - b) < 1e-4)

// Codeforces - Codeforces Beta Round 65 (Div. 2)
// D. Solitaire

const string CARD_RANKS = "23456789TJQKA";
const string SUITS = "CDHS";
#define NOT_DEFINED 50

struct Card
{
    size_t rank;
    size_t suit;
    size_t joker_index;
};

struct Position
{
    size_t row;
    size_t col;
};
int main()
{
    size_t n, m;
    cin >> n >> m;

    bool deck[4][13];
    for (size_t i = 0; i < 4; ++i)
    {
        for (size_t j = 0; j < 13; ++j)
        {
            deck[i][j] = true;
        }
    }

    Position j1_position;
    j1_position.row = NOT_DEFINED;
    j1_position.col = NOT_DEFINED;
    Position j2_position;
    j2_position.row = NOT_DEFINED;
    j2_position.col = NOT_DEFINED;
    size_t joker_count = 0;
    vector<vector<Card>> grid;
    for (size_t i = 0; i < n; ++i)
    {
        vector<Card> line;
        for (size_t j = 0; j < m; ++j)
        {
            string card_str;
            cin >> card_str;

            Card card;
            if (card_str == "J1" || card_str == "J2")
            {
                (card_str[1] == '1' ? j1_position : j2_position).row = i;
                (card_str[1] == '1' ? j1_position : j2_position).col = j;
                joker_count++;

                card.rank = NOT_DEFINED;
                card.suit = NOT_DEFINED;
                card.joker_index = card_str[1] == '1' ? 1 : 2;
            }
            else
            {
                card.rank = CARD_RANKS.find(card_str[0]);
                card.suit = SUITS.find(card_str[1]);
                card.joker_index = 0;

                deck[card.suit][card.rank] = false;
            }
            line.push_back(card);
        }
        grid.push_back(line);
    }

    bool solution_found = false;
    Position position_sq1;
    position_sq1.row = NOT_DEFINED;
    position_sq1.col = NOT_DEFINED;
    Position position_sq2;
    position_sq2.row = NOT_DEFINED;
    position_sq2.col = NOT_DEFINED;

    int j1_square_position = 0;
    int j2_square_position = 0;

    Card j1_replacement;
    j1_replacement.joker_index = 1;
    j1_replacement.rank = NOT_DEFINED;
    j1_replacement.suit = NOT_DEFINED;

    Card j2_replacement;
    j2_replacement.joker_index = 2;
    j2_replacement.rank = NOT_DEFINED;
    j2_replacement.suit = NOT_DEFINED;
    for (position_sq1.row = 0; position_sq1.row <= n - 3 && !solution_found; ++position_sq1.row)
    {
        for (position_sq1.col = 0; position_sq1.col <= m - 3 && !solution_found; ++position_sq1.col)
        {
            int ranks_in_sq1[13] = {0};
            bool sq1_impossible = false;
            for (size_t i = 0; i < 3 && !sq1_impossible; ++i)
            {
                for (size_t j = 0; j < 3 && !sq1_impossible; ++j)
                {
                    Card card = grid[position_sq1.row + i][position_sq1.col + j];
                    if (card.joker_index == 0)
                    {
                        if (ranks_in_sq1[card.rank] == 0)
                        {
                            ranks_in_sq1[card.rank] = 1;
                        }
                        else
                        {
                            sq1_impossible = true;
                        }
                    }
                }
            }
            if (sq1_impossible)
            {
                continue;
            }

            for (position_sq2.row = 0; position_sq2.row <= n - 3 && !solution_found; ++position_sq2.row)
            {
                for (position_sq2.col = 0; position_sq2.col <= m - 3 && !solution_found; ++position_sq2.col)
                {

                    if ((position_sq1.row >= position_sq2.row && position_sq1.row < position_sq2.row + 3 && position_sq1.col >= position_sq2.col && position_sq1.col < position_sq2.col + 3) || (position_sq1.row + 2 >= position_sq2.row && position_sq1.row + 2 < position_sq2.row + 3 && position_sq1.col >= position_sq2.col && position_sq1.col < position_sq2.col + 3) || (position_sq1.row >= position_sq2.row && position_sq1.row < position_sq2.row + 3 && position_sq1.col + 2 >= position_sq2.col && position_sq1.col + 2 < position_sq2.col + 3) || (position_sq1.row + 2 >= position_sq2.row && position_sq1.row + 2 < position_sq2.row + 3 && position_sq1.col + 2 >= position_sq2.col && position_sq1.col + 2 < position_sq2.col + 3))
                    {
                        continue;
                    }

                    int ranks_in_sq2[13] = {0};
                    bool sq2_impossible = false;
                    for (size_t i = 0; i < 3 && !sq2_impossible; ++i)
                    {
                        for (size_t j = 0; j < 3 && !sq2_impossible; ++j)
                        {
                            Card card = grid[position_sq2.row + i][position_sq2.col + j];
                            if (card.joker_index == 0)
                            {
                                if (ranks_in_sq2[card.rank] == 0)
                                {
                                    ranks_in_sq2[card.rank] = 1;
                                }
                                else
                                {
                                    sq2_impossible = true;
                                }
                            }
                        }
                    }
                    if (sq2_impossible)
                    {
                        continue;
                    }
                    j1_square_position = (j1_position.row >= position_sq2.row && j1_position.row < position_sq2.row + 3 && j1_position.col >= position_sq2.col && j1_position.col < position_sq2.col + 3)
                                             ? 2
                                             : ((j1_position.row >= position_sq1.row && j1_position.row < position_sq1.row + 3 && j1_position.col >= position_sq1.col && j1_position.col < position_sq1.col + 3)
                                                    ? 1
                                                    : 0);
                    j2_square_position = (j2_position.row >= position_sq2.row && j2_position.row < position_sq2.row + 3 && j2_position.col >= position_sq2.col && j2_position.col < position_sq2.col + 3)
                                             ? 2
                                             : ((j2_position.row >= position_sq1.row && j2_position.row < position_sq1.row + 3 && j2_position.col >= position_sq1.col && j2_position.col < position_sq1.col + 3)
                                                    ? 1
                                                    : 0);

                    if (j1_square_position == 0 && j2_square_position == 0)
                    {
                        // Any card would fit both jokers
                        Card card;
                        card.joker_index = 0;
                        for (card.suit = 0; card.suit < 4 && !solution_found; ++card.suit)
                        {
                            for (card.rank = 0; card.rank < 13 && !solution_found; ++card.rank)
                            {
                                if (deck[card.suit][card.rank])
                                {
                                    if (j1_position.row != NOT_DEFINED && j1_replacement.rank == NOT_DEFINED)
                                    {
                                        j1_replacement.suit = card.suit;
                                        j1_replacement.rank = card.rank;
                                        deck[card.suit][card.rank] = false;
                                    }
                                    else if (j2_position.row != NOT_DEFINED && j2_replacement.rank == NOT_DEFINED)
                                    {
                                        j2_replacement.suit = card.suit;
                                        j2_replacement.rank = card.rank;
                                        deck[card.suit][card.rank] = false;
                                    }
                                }
                                if ((j1_position.row == NOT_DEFINED || j1_replacement.rank != NOT_DEFINED) && (j2_position.row == NOT_DEFINED || j2_replacement.rank != NOT_DEFINED))
                                {
                                    solution_found = true;
                                }
                            }
                        }
                    }
                    else if (j1_square_position != 0 && j2_square_position == 0)
                    {
                        Card card;
                        card.joker_index = 0;

                        // Find the best replacement for J1
                        bool found_j1_replacement = false;
                        for (card.suit = 0; card.suit < 4; ++card.suit)
                        {
                            for (card.rank = 0; card.rank < 13; ++card.rank)
                            {
                                if (deck[card.suit][card.rank] && (j1_square_position == 1 ? ranks_in_sq1 : ranks_in_sq2)[card.rank] == 0)
                                {
                                    j1_replacement.suit = card.suit;
                                    j1_replacement.rank = card.rank;
                                    deck[card.suit][card.rank] = false;
                                    found_j1_replacement = true;
                                }
                            }
                        }
                        if (!found_j1_replacement)
                        {
                            continue;
                        }

                        // Any J2 would be fine
                        if (j2_position.row != NOT_DEFINED)
                        {
                            for (card.suit = 0; card.suit < 4 && !solution_found; ++card.suit)
                            {
                                for (card.rank = 0; card.rank < 13 && !solution_found; ++card.rank)
                                {
                                    if (deck[card.suit][card.rank])
                                    {
                                        j2_replacement.suit = card.suit;
                                        j2_replacement.rank = card.rank;
                                        deck[card.suit][card.rank] = false;
                                        solution_found = true;
                                    }
                                }
                            }
                        }
                        else
                        {
                            solution_found = true;
                        }
                    }
                    else if (j1_square_position == j2_square_position)
                    {
                        Card card;
                        card.joker_index = 0;
                        for (card.suit = 0; card.suit < 4 && !solution_found; ++card.suit)
                        {
                            for (card.rank = 0; card.rank < 13 && !solution_found; ++card.rank)
                            {
                                if (deck[card.suit][card.rank] && (j1_square_position == 1 ? ranks_in_sq1 : ranks_in_sq2)[card.rank] == 0)
                                {
                                    if (j1_position.row != NOT_DEFINED && j1_replacement.rank == NOT_DEFINED)
                                    {
                                        j1_replacement.suit = card.suit;
                                        j1_replacement.rank = card.rank;
                                        deck[card.suit][card.rank] = false;
                                    }
                                    else if (j2_position.row != NOT_DEFINED && j2_replacement.rank == NOT_DEFINED)
                                    {
                                        j2_replacement.suit = card.suit;
                                        j2_replacement.rank = card.rank;
                                        deck[card.suit][card.rank] = false;
                                    }
                                }
                                if ((j1_position.row == NOT_DEFINED || j1_replacement.rank != NOT_DEFINED) && (j2_position.row == NOT_DEFINED || j2_replacement.rank != NOT_DEFINED))
                                {
                                    solution_found = true;
                                }
                            }
                        }
                    }
                    else
                    {
                        // J1 and J2 in two distincts squares (1,2 or 2,1)
                        Card card1; // for J1
                        card1.joker_index = 0;
                        Card card2; // for J2
                        card2.joker_index = 0;
                        for (card1.suit = 0; card1.suit < 4 && !solution_found; ++card1.suit)
                        {
                            for (card1.rank = 0; card1.rank < 13 && !solution_found; ++card1.rank)
                            {
                                if (!deck[card1.suit][card1.rank] || (j1_square_position == 1 ? ranks_in_sq1 : ranks_in_sq2)[card1.rank] > 0)
                                {
                                    continue;
                                }
                                for (card2.suit = 0; card2.suit < 4; ++card2.suit)
                                {
                                    for (card2.rank = 0; card2.rank < 13; ++card2.rank)
                                    {
                                        if (!deck[card2.suit][card2.rank] || (card1.suit == card2.suit && card1.rank == card2.rank) || (j2_square_position == 1 ? ranks_in_sq1 : ranks_in_sq2)[card2.rank] > 0)
                                            continue;

                                        solution_found = true;

                                        j1_replacement.suit = card1.suit;
                                        j1_replacement.rank = card1.rank;
                                        deck[card1.suit][card1.rank] = false;

                                        j2_replacement.suit = card2.suit;
                                        j2_replacement.rank = card2.rank;
                                        deck[card2.suit][card2.rank] = false;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    if (!solution_found)
    {
        cout << "No solution." << nl;
        return 0;
    }
    cout << "Solution exists." << nl;

    if (joker_count == 0)
    {
        cout << "There are no jokers." << nl;
    }
    else
    {
        cout << "Replace";
        if (j1_position.col != NOT_DEFINED)
        {
            cout << " J1 with " << CARD_RANKS[j1_replacement.rank] << SUITS[j1_replacement.suit];
        }
        if (j2_position.col != NOT_DEFINED)
        {
            cout << (j1_position.col != NOT_DEFINED ? " and" : "") << " J2 with " << CARD_RANKS[j2_replacement.rank] << SUITS[j2_replacement.suit];
        }
        cout << "." << nl;
    }

    cout << "Put the first square to (" << (position_sq1.row) << ", " << (position_sq1.col) << ")." << nl;
    cout << "Put the second square to (" << (position_sq2.row) << ", " << (position_sq2.col) << ")." << nl;
    return 0;
}
