#include <algorithm>
#include <array>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <map>
#include <numbers>
#include <set>
#include <string>
#include <vector>
using namespace std;

#define nl '\n'
#define deb(x) cerr << #x " = " << x << nl
#define EPSILON 1e-9
#define equals(a, b) (fabs(a - b) < EPSILON)
#define almost_equals(a, b) (fabs(a - b) < 1e-4)

// Codeforces - Codeforces Round 280 (Div. 2)
// B. Vanya and Lanterns

int main()
{
    int n, l;
    cin >> n >> l;

    vector<int> lanterns(n);
    for (int i = 0; i < n; i++)
    {
        cin >> lanterns[i];
    }
    sort(lanterns.begin(), lanterns.end());

    int max_distance = 0;
    for (int i = 0; i < n - 1; i++)
    {
        max_distance = max(max_distance, lanterns[i + 1] - lanterns[i]);
    }
    max_distance = max(max_distance, 2 * lanterns[0]);
    max_distance = max(max_distance, 2 * (l - lanterns[n - 1]));
    cout << fixed << setprecision(10) << max_distance / 2.0 << nl;
    return 0;
}
