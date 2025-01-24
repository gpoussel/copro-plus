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

// Codeforces - Educational Codeforces Round 130 (Rated for Div. 2)
// A. Parkway Walk

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
        int time_spent_resting = 0;
        for (int j = 0; j < n; j++)
        {
            int energy_required;
            cin >> energy_required;
            if (energy_required > m)
            {
                time_spent_resting += energy_required - m;
                m = 0;
            }
            else
            {
                m -= energy_required;
            }
        }
        cout << time_spent_resting << nl;
    }
    return 0;
}
