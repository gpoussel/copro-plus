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

// Codeforces - Codeforces Round 984 (Div. 3)
// A. Quintomania

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        vector<int> arr(length);
        set<int> differences;
        for (int j = 0; j < length; j++)
        {
            cin >> arr[j];
            if (j > 0)
            {
                differences.insert(abs(arr[j] - arr[j - 1]));
            }
        }
        differences.erase(5);
        differences.erase(7);
        cout << (differences.empty() ? "YES" : "NO") << nl;
    }
    return 0;
}
