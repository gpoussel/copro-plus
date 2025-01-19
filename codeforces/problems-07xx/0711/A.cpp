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

// Codeforces - Codeforces Round 369 (Div. 2)
// A. Bus to Udayland

int main()
{
    int n;
    cin >> n;
    vector<string> seats(n);
    bool found = false;
    for (int i = 0; i < n; ++i)
    {
        cin >> seats[i];
        if (!found)
        {
            if (seats[i][0] == 'O' && seats[i][1] == 'O')
            {
                seats[i][0] = '+';
                seats[i][1] = '+';
                found = true;
            }
            else if (seats[i][3] == 'O' && seats[i][4] == 'O')
            {
                seats[i][3] = '+';
                seats[i][4] = '+';
                found = true;
            }
        }
    }
    if (found)
    {
        cout << "YES" << nl;
        for (int i = 0; i < n; ++i)
        {
            cout << seats[i] << nl;
        }
    }
    else
    {
        cout << "NO" << nl;
    }
    return 0;
}
