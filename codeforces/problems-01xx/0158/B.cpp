#include <algorithm>
#include <array>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <map>
#include <numbers>
#include <set>
#include <string>
#include <vector>
using namespace std;

#define nl '\n'
#define deb(x) cerr << #x " = " << x << nl
#define EPSILON 1e-9
#define equals(a, b) (fabs(a - b) < EPSILON)
#define almost_equals(a, b) (fabs(a - b) < 1e-4)

// Codeforces - VK Cup 2012 Qualification Round 1
// B. Taxi

int main()
{
    int n;
    cin >> n;

    array<int, 3> groups{0, 0, 0};
    int count_taxis = 0;
    for (int i = 0; i < n; i++)
    {
        int group;
        cin >> group;
        if (group == 4)
        {
            count_taxis++;
            continue;
        }
        groups[group - 1]++;
    }
    // Groups of 3 can be combined with groups of 1
    groups[0] -= min(groups[0], groups[2]);
    count_taxis += groups[2];

    if (groups[1] % 2 == 0)
    {
        count_taxis += groups[1] / 2;
    }
    else
    {
        count_taxis += groups[1] / 2 + 1;
        // The last one can be combined with a group of 1
        groups[0] -= min(groups[0], 2);
    }
    count_taxis += (int)ceil(groups[0] / 4.0);
    cout << count_taxis << nl;
    return 0;
}
