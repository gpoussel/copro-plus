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

// Codeforces - Codeforces Round 932 (Div. 2)
// A. Entertainment in MAC

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        long long number;
        cin >> number;
        string str;
        cin >> str;
        string reversed_string = str;
        reverse(reversed_string.begin(), reversed_string.end());
        bool should_be_reversed = reversed_string < str;
        if (should_be_reversed && number % 2 == 1)
        {
            cout << reversed_string << nl;
            continue;
        }
        else if (!should_be_reversed && number % 2 == 0)
        {
            cout << str << nl;
            continue;
        }
        if (should_be_reversed)
        {
            cout << reversed_string << str << nl;
        }
        else
        {
            cout << str << reversed_string << nl;
        }
    }
    return 0;
}
