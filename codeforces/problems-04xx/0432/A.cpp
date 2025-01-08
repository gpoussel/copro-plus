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

// Codeforces - Codeforces Round 246 (Div. 2)
// A. Choosing Teams

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> arr(n);
    for (int j = 0; j < n; j++)
    {
        cin >> arr[j];
    }
    int count = (int)count_if(arr.begin(), arr.end(), [k](int x)
                              { return x + k <= 5; });
    cout << count / 3 << nl;
    return 0;
}
