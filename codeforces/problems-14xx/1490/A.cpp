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

// Codeforces - Codeforces Round 702 (Div. 3)
// A. Dense Array

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        vector<int> arr(length);
        int count = 0;
        for (int j = 0; j < length; j++)
        {
            cin >> arr[j];
            if (j > 0)
            {
                int max_value = max(arr[j], arr[j - 1]);
                int min_value = min(arr[j], arr[j - 1]);
                while (max_value > 2 * min_value)
                {
                    min_value *= 2;
                    count++;
                }
            }
        }
        cout << count << nl;
    }
    return 0;
}
