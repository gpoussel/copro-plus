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

// Codeforces - Codeforces LATOKEN Round 1 (Div. 1 + Div. 2)
// A. Colour the Flag

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        int m;
        cin >> m;
        vector<vector<char>> flag(n, vector<char>(m));
        for (int j = 0; j < n; j++)
        {
            string row;
            cin >> row;
            for (int k = 0; k < m; k++)
            {
                flag[j][k] = row[k];
            }
        }
        bool odd_white = false;
        bool even_white = false;
        for (int r = 0; r < n; r++)
        {
            for (int c = 0; c < m; c++)
            {
                const bool odd = (r + c) & 1;
                if ((odd && (flag[r][c] == 'W')) || (!odd && (flag[r][c] == 'R')))
                {
                    odd_white = true;
                }
                else if (flag[r][c] != '.')
                {
                    even_white = true;
                }
            }
        }
        if (odd_white && even_white)
        {
            cout << "NO" << nl;
        }
        else
        {
            cout << "YES" << nl;
            char odd_character = odd_white ? 'W' : 'R';
            char even_character = odd_white ? 'R' : 'W';
            for (int r = 0; r < n; r++)
            {
                for (int c = 0; c < m; c++)
                {
                    cout << ((r + c) % 2 ? odd_character : even_character);
                }
                cout << nl;
            }
        }
    }
    return 0;
}
