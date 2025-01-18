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

// Codeforces - Hello 2024
// B. Plus-Minus Split

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int sum = 0;
        for (int i = 0; i < n; ++i)
        {
            if (str[i] == '-')
            {
                sum--;
            }
            else
            {
                sum++;
            }
        }
        cout << abs(sum) << nl;
    }
    return 0;
}
