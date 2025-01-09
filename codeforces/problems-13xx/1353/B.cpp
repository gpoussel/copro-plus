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

// Codeforces - Codeforces Round 642 (Div. 3)
// B. Two Arrays And Swaps

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
        vector<int> a(n);
        vector<int> b(n);
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> b[j];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());
        for (int j = 0; j < k; j++)
        {
            if (a[j] < b[j])
            {
                a[j] = b[j];
            }
        }
        int sum = accumulate(a.begin(), a.end(), 0, plus<int>());
        cout << sum << nl;
    }
    return 0;
}
