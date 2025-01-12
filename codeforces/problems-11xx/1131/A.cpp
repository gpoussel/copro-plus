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

// Codeforces - Codeforces Round 541 (Div. 2)
// A. Sea Battle

int main()
{
    long long w1;
    cin >> w1;
    long long h1;
    cin >> h1;
    long long w2;
    cin >> w2;
    long long h2;
    cin >> h2;
    long long number_of_cells = h1 + 1 + w1 + 1 + h1 + h2 + 1 + w2 + 1 + h2 + abs(w1 - w2);
    cout << number_of_cells << nl;
    return 0;
}
