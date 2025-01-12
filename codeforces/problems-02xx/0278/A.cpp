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

// Codeforces - Codeforces Round 170 (Div. 2)
// A. Circle Line

int main()
{
    int length;
    cin >> length;
    vector<int> arr(length);
    long long sum = 0;
    for (int j = 0; j < length; j++)
    {
        cin >> arr[j];
        sum += arr[j];
    }
    int s;
    cin >> s;
    int t;
    cin >> t;
    if (s > t)
    {
        swap(s, t);
    }
    long long clockwise = 0;
    for (int j = s - 1; j < t - 1; j++)
    {
        clockwise += arr[j];
    }
    cout << min(clockwise, sum - clockwise) << nl;
    return 0;
}
