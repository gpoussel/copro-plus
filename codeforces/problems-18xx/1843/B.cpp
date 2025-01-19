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

// Codeforces - Codeforces Round 881 (Div. 3)
// B. Long Long

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        long long sum = 0;
        int number_of_negative_sequence = 0;
        bool was_negative = false;
        for (int j = 0; j < length; j++)
        {
            long long number;
            cin >> number;
            sum += abs(number);
            if (number < 0)
            {
                if (!was_negative)
                {
                    number_of_negative_sequence++;
                    was_negative = true;
                }
            }
            else if (number > 0)
            {
                was_negative = false;
            }
        }
        cout << sum << " " << number_of_negative_sequence << nl;
    }
    return 0;
}
