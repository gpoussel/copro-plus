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

// Codeforces - Educational Codeforces Round 148 (Rated for Div. 2)
// A. New Palindrome

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        string palindrome;
        cin >> palindrome;
        int size = (int)palindrome.size();
        string left_part = palindrome.substr(0, size / 2);
        set<char> unique_chars(left_part.begin(), left_part.end());
        cout << (unique_chars.size() > 1 ? "YES" : "NO") << nl;
    }
    return 0;
}
