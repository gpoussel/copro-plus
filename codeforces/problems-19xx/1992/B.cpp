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

// Codeforces - Codeforces Round 957 (Div. 3)
// B. Angry Monk

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        long long n;
        cin >> n;
        int k;
        cin >> k;
        long long max_value = 0;
        long long operations = 0;
        for (int j = 0; j < k; j++)
        {
            long long number;
            cin >> number;
            if (number > max_value)
            {
                max_value = number;
            }
            if (number == 1)
            {
                operations++;
            }
            else
            {
                operations += number - 1 + number;
            }
        }
        operations -= max_value - 1 + max_value;
        cout << operations << nl;
    }
    return 0;
}
