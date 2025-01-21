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

// Codeforces - Good Bye 2023
// A. 2023

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
        vector<long long> b(n);
        for (int j = 0; j < n; j++)
        {
            cin >> b[j];
        }
        long long current_product = accumulate(b.begin(), b.end(), 1LL, multiplies<long long>());
        if (2023 % current_product == 0)
        {
            cout << "YES" << nl;
            cout << 2023 / current_product;
            for (int j = 0; j < k - 1; ++j)
            {
                cout << " 1";
            }
            cout << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
    return 0;
}
