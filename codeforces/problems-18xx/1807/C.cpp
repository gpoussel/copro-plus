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

// Codeforces - Codeforces Round 859 (Div. 4)
// C. Find and Replace

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        set<char> odd_characters;
        set<char> even_characters;
        for (int j = 0; j < n; j++)
        {
            if (j % 2 == 0)
            {
                even_characters.insert(str[j]);
                cerr << "even = " << str[j] << nl;
            }
            else
            {
                odd_characters.insert(str[j]);
                cerr << "odd = " << str[j] << nl;
            }
        }
        bool is_possible = true;
        for (auto &c : odd_characters)
        {
            if (even_characters.contains(c))
            {
                is_possible = false;
                break;
            }
        }
        cout << (is_possible ? "YES" : "NO") << nl;
    }
    return 0;
}
