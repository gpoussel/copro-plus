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
// B. Turtle Math: Fast Three Task

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        vector<int> arr(length);
        long sum = 0;
        for (int j = 0; j < length; j++)
        {
            cin >> arr[j];
            sum += arr[j];
        }
        if (sum % 3 == 0)
        {
            cout << 0 << nl;
            continue;
        }
        if (sum % 3 == 2)
        {
            cout << 1 << nl;
            continue;
        }
        auto element_to_remove = find_if(arr.begin(), arr.end(), [](int x)
                                         { return x % 3 == 1; });
        if (element_to_remove != arr.end())
        {
            cout << 1 << nl;
            continue;
        }
        cout << 2 << nl;
    }
    return 0;
}
