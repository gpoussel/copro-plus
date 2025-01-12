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

// Codeforces - Codeforces Round 996 (Div. 2)
// B. Crafting

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        vector<long long> b(n);
        for (int j = 0; j < n; j++)
        {
            cin >> b[j];
        }
        vector<long long> requirements(n);
        bool possible = true;
        for (int j = 0; j < n && possible; ++j)
        {
            if (b[j] > a[j])
            {
                long long delta = b[j] - a[j];
                for (int k = 0; k < n && possible; ++k)
                {
                    if (j == k)
                    {
                        continue;
                    }
                    requirements[k] += delta;
                    if (requirements[k] > a[k] - b[k])
                    {
                        possible = false;
                    }
                }
            }
        }
        cout << (possible ? "YES" : "NO") << nl;
    }
    return 0;
}
