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

// Codeforces - Codeforces Round 698 (Div. 2)
// A. Nezzar and Colorful Balls

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        int previous_value = -1;
        int number_of_previous_value = 0;
        int max_number_of_previous_value = 0;
        for (int j = 0; j < length; j++)
        {
            int number;
            cin >> number;
            if (number == previous_value)
            {
                number_of_previous_value++;
            }
            else
            {
                max_number_of_previous_value = max(max_number_of_previous_value, number_of_previous_value);
                previous_value = number;
                number_of_previous_value = 1;
            }
        }
        cout << max(max_number_of_previous_value, number_of_previous_value) << nl;
    }
    return 0;
}
