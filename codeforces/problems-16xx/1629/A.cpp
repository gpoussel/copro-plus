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

// Codeforces - Codeforces Round 767 (Div. 2)
// A. Download More RAM

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        int current_ram;
        cin >> current_ram;
        vector<pair<int, int>> software_parts(n);
        for (int j = 0; j < n; j++)
        {
            cin >> software_parts[j].first;
        }
        for (int j = 0; j < n; j++)
        {
            cin >> software_parts[j].second;
        }
        sort(software_parts.begin(), software_parts.end(), [](const pair<int, int> &a, const pair<int, int> &b)
             { return a.first < b.first; });
        int software_index = 0;
        while (software_index < n && software_parts[software_index].first <= current_ram)
        {
            current_ram += software_parts[software_index].second;
            software_index++;
        }
        cout << current_ram << nl;
    }
    return 0;
}
