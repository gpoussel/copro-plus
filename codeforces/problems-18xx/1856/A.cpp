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

// Codeforces - Codeforces Round 890 (Div. 2) supported by Constructor Institute
// A. Tales of a Sort

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
        long long result = 0;
        for (int j = 0; j < length - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                result = max(result, arr[j]);
            }
        }
        cout << result << nl;
    }
    return 0;
}
