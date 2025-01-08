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

// Codeforces - Codeforces Round 109 (Div. 2)
// A. I_love_%username%

int main()
{
    int n;
    cin >> n;
    int max_so_far = -1;
    int min_so_far = 1e4 + 1;
    int amazing_count = 0;
    for (int i = 0; i < n; ++i)
    {
        int score;
        cin >> score;

        if (score > max_so_far)
        {
            max_so_far = score;
            if (i > 0)
            {
                ++amazing_count;
            }
        }
        if (score < min_so_far)
        {
            min_so_far = score;
            if (i > 0)
            {
                ++amazing_count;
            }
        }
    }
    cout << amazing_count << nl;
    return 0;
}
