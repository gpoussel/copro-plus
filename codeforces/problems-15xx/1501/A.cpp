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

// Codeforces - Codeforces Round 707 (Div. 2, based on Moscow Open Olympiad in Informatics)
// A. Alexey and Train

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        vector<long> a(n);
        vector<long> b(n);
        for (int j = 0; j < n; ++j)
        {
            cin >> a[j];
            cin >> b[j];
        }
        vector<long> tm(n);
        for (int j = 0; j < n; ++j)
        {
            cin >> tm[j];
        }
        long current_time = 0;
        for (int j = 0; j < n; ++j)
        {
            current_time += a[j] - (j == 0 ? 0 : b[j - 1]) + tm[j];
            if (j < n - 1)
            {
                int min_waiting_time = (int)ceil((b[j] - a[j]) / 2.0);
                current_time = max(b[j], current_time + min_waiting_time);
            }
        }
        cout << current_time << nl;
    }
    return 0;
}
