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

// Codeforces - Codeforces Round 850 (Div. 2, based on VK Cup 2022 - Final Round)
// A1. Non-alternating Deck (easy version)

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        long n;
        cin >> n;
        long alice = 0;
        long bob = 0;
        long count = 1;
        while (n > 0)
        {
            long mod = count % 4;
            count = min(count, n);
            if (mod == 0 || mod == 1)
            {
                alice += count;
            }
            else
            {
                bob += count;
            }
            n -= count;
            ++count;
        }
        cout << alice << " " << bob << nl;
    }
    return 0;
}
