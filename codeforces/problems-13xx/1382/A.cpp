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

// Codeforces - Codeforces Round 658 (Div. 2)
// A. Common Subsequence

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        int m;
        cin >> m;
        set<int> a;
        for (int j = 0; j < n; j++)
        {
            int number;
            cin >> number;
            a.insert(number);
        }
        bool found = false;
        for (int j = 0; j < m; j++)
        {
            int number;
            cin >> number;
            if (!found && a.contains(number))
            {
                cout << "YES" << nl;
                cout << 1 << " " << number << nl;
                found = true;
            }
        }
        if (!found)
        {
            cout << "NO" << nl;
        }
    }
    return 0;
}
