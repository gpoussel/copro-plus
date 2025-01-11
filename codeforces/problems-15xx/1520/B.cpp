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

// Codeforces - Codeforces Round 719 (Div. 3)
// B. Ordinary Numbers

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        long long number;
        cin >> number;
        int count = 0;
        for (int j = 1; j <= 9; j++)
        {
            long long current = j;
            while (current <= number)
            {
                count++;
                current = current * 10 + j;
            }
        }
        cout << count << nl;
    }
    return 0;
}
