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

// Codeforces - Codeforces Round 847 (Div. 3)
// A. Polycarp and the Day of Pi

const string EXPECTED_DIGITS = "314159265358979323846264338327";

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        string digits;
        cin >> digits;
        int length = 0;
        while (length < (int)digits.size() && digits[length] == EXPECTED_DIGITS[length])
        {
            length++;
        }
        cout << length << nl;
    }
    return 0;
}
