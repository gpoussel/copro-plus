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

// Codeforces - Codeforces Round 891 (Div. 3)
// A. Array Coloring

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        int odd_count = 0;
        int even_count = 0;
        for (int j = 0; j < length; j++)
        {
            int number;
            cin >> number;
            if (number % 2 == 0)
            {
                even_count++;
            }
            else
            {
                odd_count++;
            }
        }
        cout << (odd_count % 2 == 0 ? "YES" : "NO") << nl;
    }
    return 0;
}
