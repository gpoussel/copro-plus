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

// Codeforces - Codeforces Round 725 (Div. 3)
// B. Friends and Candies

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        long long sum = 0;
        int length;
        cin >> length;
        vector<int> arr(length);
        for (int j = 0; j < length; j++)
        {
            cin >> arr[j];
            sum += arr[j];
        }
        if (sum % length != 0)
        {
            cout << -1 << nl;
            continue;
        }
        long long target = sum / length;
        long long result = count_if(arr.begin(), arr.end(), [target](int x)
                                    { return x > target; });
        cout << result << nl;
    }
    return 0;
}
