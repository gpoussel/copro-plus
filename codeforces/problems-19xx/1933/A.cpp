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

// Codeforces - Codeforces Round 929 (Div. 3)
// A. Turtle Puzzle: Rearrange and Negate

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        long long sum = 0;
        int length;
        cin >> length;
        for (int j = 0; j < length; j++)
        {
            int number;
            cin >> number;
            sum += abs(number);
        }
        cout << sum << nl;
    }
    return 0;
}
