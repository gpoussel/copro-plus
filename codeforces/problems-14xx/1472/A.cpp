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

// Codeforces - Codeforces Round 693 (Div. 3)
// A. Cards for Friends

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int w;
        cin >> w;
        int h;
        cin >> h;
        long long n;
        cin >> n;
        long long count = 1;
        while (w % 2 == 0 && count < n)
        {
            w /= 2;
            count *= 2;
        }
        while (h % 2 == 0 && count < n)
        {
            h /= 2;
            count *= 2;
        }
        cout << (count >= n ? "YES" : "NO") << nl;
    }
    return 0;
}
