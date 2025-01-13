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

// Codeforces - Educational Codeforces Round 38 (Rated for Div. 2)
// A. Word Correction

bool is_vowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    bool changed = true;
    while (changed)
    {
        changed = false;
        for (int i = 0; i < (int)str.size() - 1; i++)
        {
            if (is_vowel(str[i]) && is_vowel(str[i + 1]))
            {
                str.erase(i + 1, 1);
                changed = true;
                break;
            }
        }
    }
    cout << str << nl;
    return 0;
}
