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

// Codeforces - Codeforces Round 995 (Div. 3)
// B. Journey

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        long long number;
        cin >> number;
        long long a;
        cin >> a;
        long long b;
        cin >> b;
        long long c;
        cin >> c;
        long long rotation_size = a + b + c;
        long long full_rotation_count = number / rotation_size;
        long long remaining = number % rotation_size;
        long long answer = 3 * full_rotation_count;
        if (remaining > 0)
        {
            answer++;
            remaining -= a;
        }
        if (remaining > 0)
        {
            answer++;
            remaining -= b;
        }
        if (remaining > 0)
        {
            answer++;
            remaining -= c;
        }
        cout << answer << nl;
    }
    return 0;
}
