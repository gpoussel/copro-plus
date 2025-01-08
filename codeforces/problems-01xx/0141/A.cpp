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

// Codeforces - Codeforces Round 101 (Div. 2)
// A. Amusing Joke

int main()
{
    string guest;
    cin >> guest;
    string host;
    cin >> host;
    string pile;
    cin >> pile;

    string required_letters = guest + host;
    sort(required_letters.begin(), required_letters.end());
    sort(pile.begin(), pile.end());
    cout << (required_letters == pile ? "YES" : "NO") << nl;
    return 0;
}
