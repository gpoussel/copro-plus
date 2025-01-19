#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <map>
#include <numbers>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

#define nl '\n'
#define deb(x) cerr << #x " = " << x << nl
#define EPSILON 1e-9

// Codeforces - Codeforces Round 998 (Div. 3)
// B. Farmer John's Card Game

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int cows;
        cin >> cows;
        int m;
        cin >> m;
        map<int, int> cows_by_card;
        for (int c = 0; c < cows; ++c)
        {
            for (int j = 0; j < m; ++j)
            {
                int card;
                cin >> card;
                cows_by_card[card] = c;
            }
        }
        vector<int> cow_permutation(cows);
        for (int j = 0; j < cows; ++j)
        {
            cow_permutation[j] = cows_by_card[j];
        }
        bool possible = true;
        for (int turn = 1; turn < m && possible; ++turn)
        {
            for (int j = 0; j < cows && possible; ++j)
            {
                int card_value = turn * cows + j;
                if (cows_by_card[card_value] != cow_permutation[j])
                {
                    possible = false;
                }
            }
        }
        if (possible)
        {
            for (int j = 0; j < (int)cow_permutation.size(); ++j)
            {
                cout << (j > 0 ? " " : "") << cow_permutation[j] + 1;
            }
            cout << nl;
        }
        else
        {
            cout << -1 << nl;
        }
    }
    return 0;
}
