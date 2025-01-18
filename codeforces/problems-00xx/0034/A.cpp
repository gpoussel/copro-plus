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

// Codeforces - Codeforces Beta Round 34 (Div. 2)
// A. Reconnaissance 2

int main()
{
    int length;
    cin >> length;
    vector<int> arr(length);
    int min_diff = INT_MAX;
    pair<int, int> min_diff_pair;
    for (int j = 0; j < length; j++)
    {
        cin >> arr[j];
        if (j > 0)
        {
            int diff = abs(arr[j - 1] - arr[j]);
            if (diff < min_diff)
            {
                min_diff = diff;
                min_diff_pair = {j - 1, j};
            }
        }
    }
    int last_diff = abs(arr[length - 1] - arr[0]);
    if (last_diff < min_diff)
    {
        min_diff_pair = {length - 1, 0};
    }
    cout << min_diff_pair.first + 1 << " " << min_diff_pair.second + 1 << nl;
    return 0;
}
