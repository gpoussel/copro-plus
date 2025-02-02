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

// Codeforces - Codeforces Round 862 (Div. 2)
// A. We Need the Zero

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        long long bitwise_xor = 0;
        for (int j = 0; j < length; j++)
        {
            long long number;
            cin >> number;
            bitwise_xor ^= number;
        }
        if (length % 2 == 0)
        {
            cout << (bitwise_xor > 0 ? -1 : 0) << nl;
        }
        else
        {
            cout << bitwise_xor << nl;
        }
    }
    return 0;
}
