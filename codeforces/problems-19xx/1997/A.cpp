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

// Codeforces - Educational Codeforces Round 168 (Rated for Div. 2)
// A. Strong Password

char get_different_char(char c1)
{
    if (c1 == 'a')
    {
        return 'b';
    }
    return 'a';
}

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        string word;
        cin >> word;
        if (word.size() == 1)
        {
            cout << word + get_different_char(word[0]) << nl;
            continue;
        }
        bool found = false;
        for (int j = 0; j < (int)word.size() - 1; ++j)
        {
            if (word[j] == word[j + 1])
            {
                cout << word.substr(0, j + 1) + get_different_char(word[j]) + word.substr(j + 1) << nl;
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << word + get_different_char(word[word.size() - 1]) << nl;
        }
    }
    return 0;
}
