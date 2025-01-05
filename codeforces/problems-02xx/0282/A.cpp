#include <algorithm>
#include <array>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <map>
#include <numbers>
#include <set>
#include <string>
#include <vector>
using namespace std;

#define nl '\n'
#define deb(x) cerr << #x " = " << x << nl
#define EPSILON 1e-9
#define equals(a, b) (fabs(a - b) < EPSILON)
#define almost_equals(a, b) (fabs(a - b) < 1e-4)

// Codeforces - Codeforces Round 173 (Div. 2)
// A. Bit++

int main()
{
    int n;
    cin >> n;

    int value = 0;
    for (int i = 0; i < n; ++i)
    {
        string instruction;
        cin >> instruction;
        size_t plus_position = instruction.find('+');
        if (plus_position != string::npos)
        {
            value++;
        }
        else
        {
            value--;
        }
    }
    cout << value << nl;
    return 0;
}
