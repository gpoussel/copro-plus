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

// Codeforces - Codeforces Round 494 (Div. 3)
// A. Polycarp's Pockets

int main()
{
    int n;
    cin >> n;
    map<int, int> frequencies;
    int max_frequency = 0;
    for (int i = 0; i < n; i++)
    {
        int coin;
        cin >> coin;
        frequencies[coin]++;
        max_frequency = max(max_frequency, frequencies[coin]);
    }
    cout << max_frequency << nl;
    return 0;
}
