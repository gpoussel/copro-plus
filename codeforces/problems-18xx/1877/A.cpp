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

// Codeforces - Codeforces Round 902 (Div. 2, based on COMPFEST 15 - Final Round)
// A. Goals of Victory

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        long long sum = 0;
        for (int j = 0; j < n - 1; j++)
        {
            int number;
            cin >> number;
            sum += number;
        }
        cout << -sum << nl;
    }
    return 0;
}
