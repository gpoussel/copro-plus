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

// Codeforces - Codeforces Round 481 (Div. 3)
// B. File Name

int main()
{
    int length;
    cin >> length;
    string str;
    cin >> str;
    int consecutive_x = 0;
    int to_be_removed = 0;
    for (auto &c : str)
    {
        if (c == 'x')
        {
            consecutive_x++;
            if (consecutive_x >= 3)
            {
                to_be_removed++;
            }
        }
        else
        {
            consecutive_x = 0;
        }
    }
    cout << to_be_removed << nl;
    return 0;
}
