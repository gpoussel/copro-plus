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

// Codeforces - Codeforces Round 970 (Div. 3)
// C. Longest Good Array

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        long long left;
        cin >> left;
        long long right;
        cin >> right;
        long long counter = 1;
        long long response = 1;
        while (left + counter <= right)
        {
            left += counter++;
            ++response;
        }
        cout << response << nl;
    }
    return 0;
}
