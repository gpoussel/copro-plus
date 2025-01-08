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

// Codeforces - Codeforces Beta Round 57 (Div. 2)
// A. Ultra-Fast Mathematician

int main()
{
    string a;
    cin >> a;
    string b;
    cin >> b;

    for (int i = 0; i < (int)a.size(); i++)
    {
        cout << (a[i] == b[i] ? '0' : '1');
    }
    cout << nl;
    return 0;
}
