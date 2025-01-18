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

// Codeforces - Codeforces Round  834 (Div. 3)
// A. Yes-Yes?

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        string str;
        cin >> str;
        int position = -1;
        if (str[0] == 'Y')
        {
            position = 0;
        }
        else if (str[0] == 'e')
        {
            position = 1;
        }
        else if (str[0] == 's')
        {
            position = 2;
        }
        if (position == -1)
        {
            cout << "NO" << nl;
        }
        else
        {
            bool valid = true;
            for (int j = 1; j < (int)str.size(); ++j)
            {
                if ((position == 0 && str[j] != 'e') || (position == 1 && str[j] != 's') || (position == 2 && str[j] != 'Y'))
                {
                    valid = false;
                    break;
                }
                position = (position + 1) % 3;
            }
            cout << (valid ? "YES" : "NO") << nl;
        }
    }
    return 0;
}
