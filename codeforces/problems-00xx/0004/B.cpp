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

// Codeforces - Codeforces Beta Round 4 (Div. 2 Only)
// B. Before an Exam

int main()
{
    int d, sum_time;
    cin >> d >> sum_time;
    vector<pair<int, int>> time_limits(d);
    int total_min_sum = 0;
    int total_max_sum = 0;
    for (int i = 0; i < d; i++)
    {
        int min_time, max_time;
        cin >> min_time >> max_time;

        time_limits[i] = {min_time, max_time};

        total_min_sum += min_time;
        total_max_sum += max_time;
    }

    if (sum_time < total_min_sum || sum_time > total_max_sum)
    {
        cout << "NO" << nl;
        return 0;
    }
    vector<int> result(d);
    for (int i = 0; i < d; i++)
    {
        result[i] = time_limits[i].first;
        sum_time -= time_limits[i].first;
    }
    for (int i = 0; i < d && sum_time > 0; i++)
    {
        int diff = time_limits[i].second - result[i];
        if (sum_time >= diff)
        {
            result[i] += diff;
            sum_time -= diff;
        }
        else
        {
            result[i] += sum_time;
            sum_time = 0;
        }
    }

    cout << "YES" << nl;
    for (int i = 0; i < d; i++)
    {
        cout << result[i] << " ";
    }
    cout << nl;
    return 0;
}
