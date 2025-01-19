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

// Codeforces - Codeforces Round 883 (Div. 3)
// B. Rudolph and Tic-Tac-Toe

const vector<vector<pair<int, int>>> combinations = {
    {{0, 0}, {0, 1}, {0, 2}},
    {{1, 0}, {1, 1}, {1, 2}},
    {{2, 0}, {2, 1}, {2, 2}},
    {{0, 0}, {1, 0}, {2, 0}},
    {{0, 1}, {1, 1}, {2, 1}},
    {{0, 2}, {1, 2}, {2, 2}},
    {{0, 0}, {1, 1}, {2, 2}},
    {{0, 2}, {1, 1}, {2, 0}}};

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        vector<string> lines(3);
        for (int j = 0; j < 3; j++)
        {
            cin >> lines[j];
        }
        bool found = false;
        for (auto combination : combinations)
        {
            char a = lines[combination[0].first][combination[0].second];
            char b = lines[combination[1].first][combination[1].second];
            char c = lines[combination[2].first][combination[2].second];
            if (a == b && b == c && a != '.')
            {
                cout << a << nl;
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "DRAW" << nl;
        }
    }
    return 0;
}
