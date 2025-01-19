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

// Codeforces - Codeforces Round 921 (Div. 2)
// A. We Got Everything Covered!

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        string letters;
        for (int j = 1; j <= k; ++j)
        {
            letters += (char)('a' + j - 1);
        }
        string reversed_letters = letters;
        reverse(reversed_letters.begin(), reversed_letters.end());
        for (int j = 0; j < n; ++j)
        {
            if (j % 2 == 0)
            {
                cout << letters;
            }
            else
            {
                cout << reversed_letters;
            }
        }
        cout << nl;
    }
    return 0;
}
