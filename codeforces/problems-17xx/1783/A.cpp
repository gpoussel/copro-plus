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

// Codeforces - Educational Codeforces Round 141 (Rated for Div. 2)
// A. Make it Beautiful

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        vector<int> arr(length);
        for (int j = 0; j < length; j++)
        {
            cin >> arr[j];
        }
        sort(arr.begin(), arr.end());
        if (arr[0] == arr[length - 1])
        {
            cout << "NO" << nl;
            continue;
        }
        cout << "YES" << nl;
        cout << arr[length - 1] << ' ';
        for (int j = 0; j < length - 1; j++)
        {
            cout << arr[j] << ' ';
        }
        cout << nl;
    }
    return 0;
}
