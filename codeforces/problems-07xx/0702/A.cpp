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

// Codeforces - Educational Codeforces Round 15
// A. Maximum Increase

int main()
{
    int length;
    cin >> length;
    int longest_increasing = 0;
    int current_increasing = 0;
    long long previous_number = -1;
    for (int i = 0; i < length; ++i)
    {
        long long number;
        cin >> number;
        if (number > previous_number)
        {
            ++current_increasing;
        }
        else
        {
            longest_increasing = max(longest_increasing, current_increasing);
            current_increasing = 1;
        }
        previous_number = number;
    }
    longest_increasing = max(longest_increasing, current_increasing);
    cout << longest_increasing << nl;
    return 0;
}
