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

// Codeforces - Codeforces Round 762 (Div. 3)
// A. Square String?

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        string str;
        cin >> str;
        int length = (int)str.size();
        if (length % 2 != 0)
        {
            cout << "NO" << nl;
            continue;
        }
        string left_part = str.substr(0, length / 2);
        string right_part = str.substr(length / 2, length / 2);
        cout << (left_part == right_part ? "YES" : "NO") << nl;
    }
    return 0;
}
