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

// Codeforces - Codeforces Round 163 (Div. 2)
// B. Queue at the School

int main()
{
    int n, t;
    cin >> n >> t;

    string queue;
    cin >> queue;

    while (t-- > 0)
    {
        for (int i = 0; i < n - 1; ++i)
        {
            if (queue[i] == 'B' && queue[i + 1] == 'G')
            {
                swap(queue[i], queue[i + 1]);
                i++;
            }
        }
    }
    cout << queue << nl;
    return 0;
}
