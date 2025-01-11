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

// Codeforces - Codeforces Round 974 (Div. 3)
// A. Robin Helps

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        int robin = 0;
        int people_helped = 0;
        for (int j = 0; j < n; j++)
        {
            int number;
            cin >> number;
            if (number >= k)
            {
                robin += number;
            }
            else if (number == 0)
            {
                if (robin > 0)
                {
                    robin--;
                    people_helped++;
                }
            }
        }
        cout << people_helped << nl;
    }
    return 0;
}
