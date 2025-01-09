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

// Codeforces - Codeforces Round 790 (Div. 4)
// B. Equal Candies

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        vector<long> arr(length);
        for (int j = 0; j < length; j++)
        {
            cin >> arr[j];
        }
        sort(arr.begin(), arr.end());
        long min_value = arr[0];
        long long sum = accumulate(arr.begin(), arr.end(), 0, [min_value](long long a, long long b)
                                   { return a + b - min_value; });
        cout << sum << nl;
    }
    return 0;
}
