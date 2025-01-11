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

// Codeforces - Codeforces Round 690 (Div. 3)
// A. Favorite Sequence

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        vector<long long> arr(length);
        for (int j = 0; j < length; j++)
        {
            cin >> arr[j];
        }
        for (int i = 0; i < length / 2; ++i)
        {
            cout << (i > 0 ? " " : "") << arr[i] << " " << arr[length - i - 1];
        }
        if (length % 2 == 1)
        {
            cout << (length >= 2 ? " " : "") << arr[length / 2];
        }
        cout << nl;
    }
    return 0;
}
