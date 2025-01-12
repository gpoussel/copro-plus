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

// Codeforces - Codeforces Round 370 (Div. 2)
// A. Memory and Crow

int main()
{
    int length;
    cin >> length;
    vector<long long> arr(length);
    for (int j = 0; j < length; j++)
    {
        cin >> arr[j];
    }
    for (int j = 0; j < length - 1; j++)
    {
        cout << arr[j] + arr[j + 1] << " ";
    }
    cout << arr[length - 1] << nl;
    return 0;
}
