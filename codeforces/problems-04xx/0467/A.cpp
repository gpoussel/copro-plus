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

// Codeforces - Codeforces Round 267 (Div. 2)
// A. George and Accommodation

int main()
{
    int n;
    cin >> n;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        int q;
        cin >> q;
        if (p + 2 <= q)
        {
            count++;
        }
    }
    cout << count << nl;
    return 0;
}
