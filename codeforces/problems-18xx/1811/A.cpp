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

// Codeforces - Codeforces Round 863 (Div. 3)
// A. Insert Digit

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        int d;
        cin >> d;
        string number;
        cin >> number;

        bool found = false;
        for (int j = 0; j < (int)number.size(); j++)
        {
            if (number[j] - '0' < d)
            {
                cout << number.substr(0, j) << d << number.substr(j) << nl;
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << number << d << nl;
        }
    }
    return 0;
}
