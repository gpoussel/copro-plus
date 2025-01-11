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

// Codeforces - Codeforces Round 966 (Div. 3)
// A. Primary Task

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        string number;
        cin >> number;
        if (number.size() <= 2 || (number.size() == 3 && (number[2] == '0' || number[2] == '1')))
        {
            cout << "NO" << nl;
        }
        else
        {
            cout << (number[0] == '1' && number[1] == '0' && number[2] != '0' ? "YES" : "NO") << nl;
        }
    }
    return 0;
}
