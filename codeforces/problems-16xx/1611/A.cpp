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

// Codeforces - Codeforces Round 756 (Div. 3)
// A. Make Even

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        string number;
        cin >> number;
        int index_of_last_even = -1;
        for (int j = 0; j < (int)number.size(); ++j)
        {
            if ((number[j] - '0') % 2 == 0)
            {
                index_of_last_even = j;
            }
        }
        if (index_of_last_even == -1)
        {
            cout << -1 << nl;
        }
        else if (index_of_last_even == (int)number.size() - 1)
        {
            cout << 0 << nl;
        }
        else
        {
            if ((number[0] - '0') % 2 == 0)
            {
                cout << 1 << nl;
            }
            else
            {
                cout << 2 << nl;
            }
        }
    }
    return 0;
}
