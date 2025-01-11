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

// Codeforces - Codeforces Round 933 (Div. 3)
// A. Rudolf and the Ticket

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
        int k;
        cin >> k;
        vector<int> left_pocket_values(n);
        for (int j = 0; j < n; ++j)
        {
            cin >> left_pocket_values[j];
        }
        int number_of_ways = 0;
        for (int j = 0; j < m; ++j)
        {
            int c;
            cin >> c;
            number_of_ways += (int)count_if(left_pocket_values.begin(), left_pocket_values.end(), [c, k](int x)
                                            { return x + c <= k; });
        }
        cout << number_of_ways << nl;
    }
    return 0;
}
