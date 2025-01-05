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

// Codeforces - Codeforces Round 163 (Div. 2)
// A. Stones on the Table

int main()
{
    int n;
    cin >> n;
    string stones;
    cin >> stones;
    int to_be_removed = 0;
    for (int i = 1; i < n; i++)
    {
        if (stones[i] == stones[i - 1])
        {
            to_be_removed++;
        }
    }
    cout << to_be_removed << nl;
    return 0;
}
