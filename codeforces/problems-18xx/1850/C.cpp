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

// Codeforces - Codeforces Round 886 (Div. 4)
// C. Word on the Paper

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        string word = "";
        for (int j = 0; j < 8; ++j)
        {
            string line;
            cin >> line;
            auto position_of_word_char = find_if(line.begin(), line.end(), [](char c)
                                                 { return c != '.'; });
            if (position_of_word_char != line.end())
            {
                word += *position_of_word_char;
            }
        }
        cout << word << nl;
    }
    return 0;
}
