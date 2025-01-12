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

// Codeforces - Codeforces Round 881 (Div. 3)
// A. Sasha and Array Coloring

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
        long color_score_sum = 0;
        for (int j = 0; j < length / 2; ++j)
        {
            color_score_sum += arr[length - j - 1] - arr[j];
        }
        cout << color_score_sum << nl;
    }
    return 0;
}
