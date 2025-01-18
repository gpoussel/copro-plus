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

// Codeforces - Educational Codeforces Round 169 (Rated for Div. 2)
// A. Closest Point

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
        if (length > 2)
        {
            cout << "NO" << nl;
        }
        else
        {
            int min_value = *min_element(arr.begin(), arr.end());
            int max_value = *max_element(arr.begin(), arr.end());
            cout << (max_value - min_value > 1 ? "YES" : "NO") << nl;
        }
    }
    return 0;
}
