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

// Codeforces - Codeforces Beta Round 65 (Div. 2)
// B. Progress Bar

int main()
{
    int n, k, t;
    cin >> n >> k >> t;

    double p = n * k * t / 100.0;
    for (int i = 0; i < n; i++)
    {
        if (p >= k)
        {
            cout << k << " ";
            p -= k;
        }
        else
        {
            cout << (int)p << " ";
            p = 0;
        }
    }
    cout << nl;
    return 0;
}
