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

// Codeforces - Codeforces Round 899 (Div. 2)
// A. Increasing Sequence

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
        int result = 0;
        for (int j = 0; j < length; ++j)
        {
            result++;
            if (result == arr[j])
            {
                result++;
            }
        }
        cout << result << nl;
    }
    return 0;
}
