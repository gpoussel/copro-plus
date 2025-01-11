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
// B. Grab the Candies

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        int sum_of_odd = 0;
        int sum_of_even = 0;
        for (int j = 0; j < n; ++j)
        {
            int candy;
            cin >> candy;
            if (candy % 2 == 0)
            {
                sum_of_even += candy;
            }
            else
            {
                sum_of_odd += candy;
            }
        }
        cout << (sum_of_even > sum_of_odd ? "YES" : "NO") << nl;
    }
    return 0;
}
