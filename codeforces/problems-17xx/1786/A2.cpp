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
// A2. Alternating Deck (hard version)

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        long n;
        cin >> n;
        long alice_white = 0;
        long alice_black = 0;
        long bob_white = 0;
        long bob_black = 0;
        long count = 1;
        while (n > 0)
        {
            long mod = count % 4;
            count = min(count, n);
            if (mod == 0 || mod == 1)
            {
                alice_white += (long)ceil(count / 2.0);
                alice_black += (long)floor(count / 2.0);
            }
            else
            {
                bob_black += (long)ceil(count / 2.0);
                bob_white += (long)floor(count / 2.0);
            }
            n -= count;
            ++count;
        }
        cout << alice_white << " " << alice_black << " " << bob_white << " " << bob_black << nl;
    }
    return 0;
}
