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

// Codeforces - Educational Codeforces Round 142 (Rated for Div. 2)
// A. GamingForces

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        int number_of_ones = 0;
        for (int j = 0; j < length; j++)
        {
            int n;
            cin >> n;
            if (n == 1)
            {
                number_of_ones++;
            }
        }
        int action_1 = number_of_ones / 2;
        int action_2 = number_of_ones % 2 + length - number_of_ones;
        cout << action_1 + action_2 << nl;
    }
    return 0;
}
