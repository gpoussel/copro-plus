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

// Codeforces - Codeforces Round 879 (Div. 2)
// A. Unit Array

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        vector<int> arr(length);
        int number_of_ones = 0;
        int number_of_minus_ones = 0;
        for (int j = 0; j < length; j++)
        {
            cin >> arr[j];
            if (arr[j] == 1)
            {
                number_of_ones++;
            }
            else
            {
                number_of_minus_ones++;
            }
        }
        int changes = 0;
        while (number_of_minus_ones > number_of_ones)
        {
            changes++;
            number_of_minus_ones--;
            number_of_ones++;
        }
        if (number_of_minus_ones % 2 == 1)
        {
            changes++;
            number_of_minus_ones++;
            number_of_ones++;
        }
        cout << changes << nl;
    }
    return 0;
}
