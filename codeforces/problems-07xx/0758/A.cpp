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

// Codeforces - Codeforces Round 392 (Div. 2)
// A. Holiday Of Equality

int main()
{
    int length;
    cin >> length;
    vector<int> arr(length);
    for (int j = 0; j < length; j++)
    {
        cin >> arr[j];
    }
    int max_value = *max_element(arr.begin(), arr.end());
    cout << accumulate(arr.begin(), arr.end(), 0, [max_value](int acc, int x)
                       { return acc + (max_value - x); })
         << nl;
    return 0;
}
