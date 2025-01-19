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

// Codeforces - Codeforces Round 332 (Div. 2)
// A. Patrick and Shopping

int main()
{
    long long d1;
    cin >> d1;
    long long d2;
    cin >> d2;
    long long d3;
    cin >> d3;
    set<long long> distances;
    distances.insert(d1 + d3 + d2);
    distances.insert(d1 + d1 + d2 + d2);
    distances.insert(d1 + d1 + d3 + d3);
    distances.insert(d2 + d2 + d3 + d3);
    cout << *min_element(distances.begin(), distances.end()) << nl;
    return 0;
}
