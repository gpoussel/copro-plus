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

// Codeforces - Codeforces Round 780 (Div. 3)
// B. Vlad and Candies

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        vector<long long> arr(length);
        for (int j = 0; j < length; j++)
        {
            cin >> arr[j];
        }
        if (length == 1)
        {
            cout << (arr[0] == 1 ? "YES" : "NO") << nl;
            continue;
        }
        sort(arr.begin(), arr.end());
        cout << (arr[length - 1] - arr[length - 2] < 2 ? "YES" : "NO") << nl;
    }
    return 0;
}
