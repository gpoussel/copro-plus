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

// Codeforces - Codeforces Round 479 (Div. 3)
// A. Wrong Subtraction

int main()
{
    long long n;
    cin >> n;
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        if (n % 10 == 0)
        {
            n /= 10;
        }
        else
        {
            n--;
        }
    }
    cout << n << nl;
    return 0;
}
