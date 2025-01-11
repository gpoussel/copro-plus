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

// Codeforces - Codeforces Round 726 (Div. 2)
// A. Arithmetic Array

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int size;
        cin >> size;
        long long sum = 0;
        for (int j = 0; j < size; ++j)
        {
            int number;
            cin >> number;
            sum += number;
        }
        if (sum == size)
        {
            cout << 0 << nl;
        }
        else if (sum < size)
        {
            cout << 1 << nl;
        }
        else
        {
            cout << sum - size << nl;
        }
    }
    return 0;
}
