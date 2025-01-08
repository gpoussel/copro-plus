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

// Codeforces - Codeforces Round 375 (Div. 2)
// A. The New Year: Meeting Friends

int main()
{
    int x1;
    cin >> x1;
    int x2;
    cin >> x2;
    int x3;
    cin >> x3;

    vector<int> v = {x1, x2, x3};
    sort(v.begin(), v.end());
    cout << v[2] - v[1] + v[1] - v[0] << nl;
    return 0;
}
