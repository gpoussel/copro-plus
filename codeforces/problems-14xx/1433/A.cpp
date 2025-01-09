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

// Codeforces - Codeforces Round 677 (Div. 3)
// A. Boring Apartments

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        string apartment_number;
        cin >> apartment_number;
        int length = (int)apartment_number.size();
        int digit = apartment_number[0] - '0';
        cout << (digit - 1) * 10 + length * (length + 1) / 2 << nl;
    }
    return 0;
}
