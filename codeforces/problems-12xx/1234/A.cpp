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

// Codeforces - Codeforces Round 590 (Div. 3)
// A. Equalize Prices Again

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        long long sum = 0;
        for (int j = 0; j < length; j++)
        {
            long long number;
            cin >> number;
            sum += number;
        }
        cout << (long long)ceil((double)sum / (double)length) << nl;
    }
    return 0;
}
