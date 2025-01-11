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

// Codeforces - Codeforces Round 937 (Div. 4)
// B. Upscaling

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        for (int r = 0; r < n; r++)
        {
            for (int iteration = 0; iteration < 2; ++iteration)
            {
                for (int c = 0; c < n; c++)
                {
                    cout << ((r + c) % 2 == 0 ? "##" : "..");
                }
                cout << nl;
            }
        }
    }
    return 0;
}
