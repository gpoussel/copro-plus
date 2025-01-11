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

// Codeforces - Codeforces Round 898 (Div. 4)
// C. Target Practice

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int sum_of_score = 0;
        for (int line = 0; line < 10; ++line)
        {
            string str;
            cin >> str;
            for (int j = 0; j < 10; ++j)
            {
                if (str[j] == 'X')
                {
                    for (int score = 1; score <= 5; ++score)
                    {
                        if (line + 1 == score || 10 - line == score || j + 1 == score || 10 - j == score)
                        {
                            sum_of_score += score;
                            break;
                        }
                    }
                }
            }
        }
        cout << sum_of_score << nl;
    }
    return 0;
}
