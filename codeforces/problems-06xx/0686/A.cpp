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

// Codeforces - Codeforces Round 359 (Div. 2)
// A. Free Ice Cream

int main()
{
    int n;
    cin >> n;
    long long x;
    cin >> x;
    int count_child_in_distress = 0;
    for (int i = 0; i < n; ++i)
    {
        char symbol;
        cin >> symbol;
        long long value;
        cin >> value;

        if (symbol == '+')
        {
            x += value;
        }
        else
        {
            if (x >= value)
            {
                x -= value;
            }
            else
            {
                ++count_child_in_distress;
            }
        }
    }
    cout << x << " " << count_child_in_distress << nl;
    return 0;
}
