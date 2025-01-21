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

// Codeforces - Codeforces Round 797 (Div. 3)
// C. Restoring the Duration of Tasks

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        vector<long long> s(n);
        for (int j = 0; j < n; j++)
        {
            cin >> s[j];
        }
        vector<long long> f(n);
        for (int j = 0; j < n; j++)
        {
            cin >> f[j];
        }
        cout << f[0] - s[0];
        for (int i = 1; i < n; i++)
        {
            cout << ' ' << f[i] - max(s[i], f[i - 1]);
        }
        cout << nl;
    }
    return 0;
}
