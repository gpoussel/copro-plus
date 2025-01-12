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

// Codeforces - Codeforces Round 416 (Div. 2)
// A. Vladik and Courtesy

int main()
{
    long long a;
    cin >> a;
    long long b;
    cin >> b;
    int vladik_turns = 0;
    while (a >= 2 * vladik_turns + 1)
    {
        a -= 2 * vladik_turns + 1;
        vladik_turns++;
    }
    int valera_turns = 0;
    while (b >= 2 * (valera_turns + 1))
    {
        b -= 2 * (valera_turns + 1);
        valera_turns++;
    }
    cout << (vladik_turns <= valera_turns ? "Vladik" : "Valera") << nl;
    return 0;
}
