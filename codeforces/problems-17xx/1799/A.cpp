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

// Codeforces - Codeforces Round 854 by cybercats (Div. 1 + Div. 2)
// A. Recent Actions

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
        vector<int> arr(m);
        for (int j = 0; j < m; j++)
        {
            cin >> arr[j];
        }
        vector<int> recent_actions;
        for (int j = 1; j <= n; j++)
        {
            recent_actions.push_back(j);
        }
        map<int, int> eliminations;
        for (int j = 0; j < (int)arr.size(); j++)
        {
            int action = arr[j];
            auto it = find(recent_actions.begin(), recent_actions.end(), action);
            if (it != recent_actions.end())
            {
                recent_actions.erase(it);
            }
            else
            {
                eliminations[recent_actions[recent_actions.size() - 1]] = j + 1;
                recent_actions.pop_back();
            }
            recent_actions.insert(recent_actions.begin(), action);
        }
        for (int j = 1; j <= n; ++j)
        {
            if (j > 1)
            {
                cout << ' ';
            }
            if (eliminations.contains(j))
            {
                cout << eliminations[j];
            }
            else
            {
                cout << -1;
            }
        }
        cout << nl;
    }
    return 0;
}
