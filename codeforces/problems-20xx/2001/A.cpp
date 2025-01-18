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

// Codeforces - Codeforces Round 967 (Div. 2)
// A. Make All Equal

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
        if (length == 1)
        {
            cout << 0 << nl;
            continue;
        }
        map<int, int> frequencies;
        int max_frequency = 0;
        for (int j = 0; j < length; j++)
        {
            frequencies[arr[j]]++;
            max_frequency = max(max_frequency, frequencies[arr[j]]);
        }
        cout << length - max_frequency << nl;
    }
    return 0;
}
