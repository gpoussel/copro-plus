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

// Codeforces - Codeforces Beta Round 87 (Div. 2 Only)
// A. Tram

int main()
{
    int n;
    cin >> n;

    long long current_count = 0;
    long long max_so_far = 0;

    for (int i = 0; i < n; i++)
    {
        int exit;
        cin >> exit;
        int enter;
        cin >> enter;

        current_count = current_count - exit + enter;
        max_so_far = max(max_so_far, current_count);
    }
    cout << max_so_far << nl;
    return 0;
}
