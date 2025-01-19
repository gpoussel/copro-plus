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

// Codeforces - Educational Codeforces Round 166 (Rated for Div. 2)
// A. Verify Password

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        string password;
        cin >> password;
        bool valid = true;
        char last_char = ' ';
        char last_digit = ' ';
        for (char c : password)
        {
            if (isalpha(c))
            {
                if (c < last_char)
                {
                    valid = false;
                    break;
                }
                last_char = c;
            }
            if (isdigit(c))
            {
                if (c < last_digit || last_char != ' ')
                {
                    valid = false;
                    break;
                }
                last_digit = c;
            }
        }
        cout << (valid ? "YES" : "NO") << nl;
    }
    return 0;
}
