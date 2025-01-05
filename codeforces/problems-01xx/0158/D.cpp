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
// D. Ice Sculptures

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

int main()
{
    int n;
    cin >> n;

    vector<int> attractiveness(n);
    for (int i = 0; i < n; i++)
    {
        cin >> attractiveness[i];
    }

    long best_sum = -1e9;
    for (auto &divisor : get_divisors(n))
    {
        if (divisor < 3)
        {
            continue;
        }

        int side = n / (int)divisor;
        for (int start_index = 0; start_index < side; ++start_index)
        {
            long sum = 0;
            for (int i = start_index; i < n; i += side)
            {
                sum += attractiveness[i];
            }
            if (sum > best_sum)
            {
                best_sum = sum;
            }
        }
    }

    cout << best_sum << endl;

    return 0;
}
