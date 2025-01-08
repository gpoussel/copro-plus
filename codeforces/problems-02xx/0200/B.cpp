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

// Codeforces - Codeforces Round 126 (Div. 2)
// B. Drinks

int main()
{
    int n;
    cin >> n;

    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;

        sum += p;
    }
    cout << setprecision(8) << (double)sum / (double)n << nl;
    return 0;
}
