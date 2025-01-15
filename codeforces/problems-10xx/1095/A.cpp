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

// Codeforces - Codeforces Round 529 (Div. 3)
// A. Repeating Cipher

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int increment = 0;
    for (int i = 0; i < n; i += ++increment)
    {
        cout << str[i];
    }
    cout << nl;
    return 0;
}
