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
// B. Startup

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int shelves;
        cin >> shelves;
        int bottles;
        cin >> bottles;
        map<int, int> brand_costs;
        for (int j = 0; j < bottles; ++j)
        {
            int brand;
            cin >> brand;
            int cost;
            cin >> cost;
            brand_costs[brand] += cost;
        }
        vector<int> costs;
        for (auto &[brand, cost] : brand_costs)
        {
            costs.push_back(cost);
        }
        sort(costs.begin(), costs.end(), greater<int>());

        int sum_of_cost = 0;
        for (int p = 0; p < (int)costs.size() && p < shelves; p++)
        {
            sum_of_cost += costs[p];
        }
        cout << sum_of_cost << nl;
    }
    return 0;
}
