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

// Codeforces - Codeforces Round 799 (Div. 4)
// A. Marathon

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int a;
        cin >> a;
        vector<int> others(3);
        cin >> others[0];
        cin >> others[1];
        cin >> others[2];
        cout << count_if(others.begin(), others.end(), [a](int x)
                         { return x > a; })
             << nl;
    }
    return 0;
}
