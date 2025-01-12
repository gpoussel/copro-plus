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

// Codeforces - Codeforces Round 784 (Div. 4)
// C. Odd/Even Increments

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        int odd_parity = -1;
        int even_parity = -1;
        bool possible = true;
        for (int j = 0; j < n; ++j)
        {
            int number;
            cin >> number;
            if (j % 2 == 0)
            {
                if (even_parity == -1)
                {
                    even_parity = number % 2;
                }
                else if (even_parity != number % 2)
                {
                    possible = false;
                }
            }
            else
            {
                if (odd_parity == -1)
                {
                    odd_parity = number % 2;
                }
                else if (odd_parity != number % 2)
                {
                    possible = false;
                }
            }
        }
        cout << (possible ? "YES" : "NO") << nl;
    }
    return 0;
}
