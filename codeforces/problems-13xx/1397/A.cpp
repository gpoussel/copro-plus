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

// Codeforces - Codeforces Round 666 (Div. 2)
// A. Juggling Letters

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int number_of_strings;
        cin >> number_of_strings;
        map<char, int> frequency;
        for (int j = 0; j < number_of_strings; j++)
        {
            string s;
            cin >> s;
            for (char c : s)
            {
                frequency[c]++;
            }
        }
        bool can_make_all_strings_equals = true;
        for (auto &pair : frequency)
        {
            if (pair.second % number_of_strings != 0)
            {
                can_make_all_strings_equals = false;
                break;
            }
        }
        cout << (can_make_all_strings_equals ? "YES" : "NO") << nl;
    }
    return 0;
}
