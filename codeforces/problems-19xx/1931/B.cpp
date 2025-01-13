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

// Codeforces - Codeforces Round 925 (Div. 3)
// B. Make Equal

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
        long long target_value = sum / length;
        long long remaining = 0;
        bool possible = true;
        for (int j = 0; j < length; j++)
        {
            remaining += arr[j] - target_value;
            if (remaining < 0)
            {
                possible = false;
                break;
            }
        }
        cout << (possible ? "YES" : "NO") << nl;
    }
    return 0;
}
