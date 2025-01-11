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

// Codeforces - Codeforces Round 571 (Div. 2)
// A. Vus the Cossack and a Contest

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int k;
    cin >> k;
    cout << (m >= n && k >= n ? "Yes" : "No") << nl;
    return 0;
}
