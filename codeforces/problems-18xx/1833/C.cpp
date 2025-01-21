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

// Codeforces - Codeforces Round 874 (Div. 3)
// C. Vlad Building Beautiful Array

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        long long min_number = LLONG_MAX;
        int count = 0;
        for (int j = 0; j < length; j++)
        {
            long long number;
            cin >> number;
            if (number % 2 == 0)
            {
                count++;
            }
            min_number = min(min_number, number);
        }
        cout << (count == length || min_number % 2 == 1 ? "YES" : "NO") << nl;
    }
    return 0;
}
