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

// Codeforces - Codeforces Round 926 (Div. 2)
// B. Sasha and the Drawing

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        long long n;
        cin >> n;
        long long k;
        cin >> k;
        long long result;
        if (k <= 4 * (n - 1))
        {
            result = (k + 1) / 2;
        }
        else if (k <= 4 * n - 3)
        {
            result = 2 * n - 1;
        }
        else
        {
            result = 2 * n;
        }
        cout << result << nl;
    }
    return 0;
}
