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

// Codeforces - Codeforces Round 900 (Div. 3)
// A. How Much Does Daytona Cost?

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
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
        if (n == 1)
        {
            cout << (arr[0] == k ? "YES" : "NO") << nl;
        }
        else
        {
            int occurrences_of_k = (int)count(arr.begin(), arr.end(), k);
            cout << (occurrences_of_k > 0 ? "YES" : "NO") << nl;
        }
    }
    return 0;
}
