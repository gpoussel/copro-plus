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

// Codeforces - Codeforces Round 950 (Div. 3)
// B. Choosing Cubes

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        int f;
        cin >> f;
        int k;
        cin >> k;
        vector<int> values(n);
        for (int j = 0; j < n; ++j)
        {
            cin >> values[j];
        }
        int favorite = values[f - 1];
        sort(values.begin(), values.end(), greater<int>());
        bool found_in_removed = false;
        bool found_in_remaining = false;
        for (int i = 0; i < k; ++i)
        {
            if (values[i] == favorite)
            {
                found_in_removed = true;
                break;
            }
        }
        for (int i = k; i < n; ++i)
        {
            if (values[i] == favorite)
            {
                found_in_remaining = true;
                break;
            }
        }
        if (found_in_removed && !found_in_remaining)
        {
            cout << "YES" << nl;
        }
        else if (found_in_removed && found_in_remaining)
        {
            cout << "MAYBE" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
    return 0;
}
