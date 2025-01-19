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

// Codeforces - Codeforces Round 737 (Div. 2)
// A. Ezzat and Two Subsequences

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        vector<long long> arr(length);
        long long sum = 0;
        for (int j = 0; j < length; j++)
        {
            cin >> arr[j];
            sum += arr[j];
        }
        sort(arr.begin(), arr.end());
        long long max_value = arr[length - 1];
        double average_1 = (double)(sum - max_value) / (double)(length - 1);
        double average_2 = (double)max_value;
        cout << fixed << setprecision(9) << average_1 + average_2 << nl;
    }
    return 0;
}
