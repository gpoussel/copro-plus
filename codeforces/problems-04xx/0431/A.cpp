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

// Codeforces - Codeforces Round 247 (Div. 2)
// A. Black Square

int main()
{
    int a1;
    cin >> a1;
    int a2;
    cin >> a2;
    int a3;
    cin >> a3;
    int a4;
    cin >> a4;
    string str;
    cin >> str;
    int result = accumulate(str.begin(), str.end(), 0, [&](int acc, char c)
                            {
        switch (c)
        {
        case '1':
            return acc + a1;
        case '2':
            return acc + a2;
        case '3':
            return acc + a3;
        case '4':
            return acc + a4;
        default:
            return acc;
        } });
    cout << result << nl;
    return 0;
}
