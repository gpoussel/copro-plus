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

// Codeforces - Codeforces Round 887 (Div. 2)
// A. Desorting

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        vector<int> arr(length);
        int min_difference = INT_MAX;
        bool sorted = true;
        for (int j = 0; j < length; j++)
        {
            cin >> arr[j];
            if (j > 0)
            {
                if (arr[j] < arr[j - 1])
                {
                    sorted = false;
                }
                min_difference = min(min_difference, arr[j] - arr[j - 1]);
            }
        }
        if (sorted)
        {
            cout << max(1, (int)ceil((min_difference + 1) / 2.0)) << nl;
        }
        else
        {
            cout << 0 << nl;
        }
    }
    return 0;
}
