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

// Codeforces - Codeforces Beta Round 65 (Div. 2)
// C. Round Table Knights

vector<long long> get_divisors(long long n)
{
    vector<long long> divs;
    for (int i = 1; 1LL * i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divs.push_back(i);
            if (i != n / i)
            {
                divs.push_back(n / i);
            }
        }
    }
    sort(divs.begin(), divs.end());
    return divs;
}

bool is_polygon_possible(const vector<int> &moods)
{
    int n = (int)moods.size();
    for (auto &divisor : get_divisors(n))
    {
        // divisor is the number of knights involved
        if (divisor < 3)
        {
            continue;
        }
        int side = n / (int)divisor;
        for (int start_index = 0; start_index < side; start_index++)
        {
            bool possible = true;
            for (int i = start_index; i < n; i += side)
            {
                if (moods[i] == 0)
                {
                    possible = false;
                    break;
                }
            }
            if (possible)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    vector<int> moods(n);
    for (int i = 0; i < n; i++)
    {
        cin >> moods[i];
    }
    cout << (is_polygon_possible(moods) ? "YES" : "NO") << nl;
    return 0;
}
