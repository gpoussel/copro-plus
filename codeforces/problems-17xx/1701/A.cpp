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

// Codeforces - Educational Codeforces Round 131 (Rated for Div. 2)
// A. Grass Field

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        vector<int> numbers(4);
        int number_of_zeros = 0;
        for (int j = 0; j < 4; j++)
        {
            cin >> numbers[j];
            if (numbers[j] == 0)
            {
                number_of_zeros++;
            }
        }
        if (number_of_zeros == 4)
        {
            cout << 0 << nl;
        }
        else if (number_of_zeros == 3 || number_of_zeros == 2 || number_of_zeros == 1)
        {
            cout << 1 << nl;
        }
        else
        {
            cout << 2 << nl;
        }
    }
    return 0;
}
