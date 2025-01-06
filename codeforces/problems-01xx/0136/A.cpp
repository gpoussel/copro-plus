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

// Codeforces - Codeforces Beta Round 97 (Div. 2)
// A. Presents

int main()
{
    int n;
    cin >> n;

    vector<int> a(n, 0);
    for (int i = 0; i < n; i++)
    {
        int gifter;
        cin >> gifter;
        a[gifter - 1] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << nl;
    return 0;
}
