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

// Codeforces - Codeforces Round 677 (Div. 3)
// B. Yet Another Bookshelf

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        int consecutive_zero_count = 0;
        int sum_of_gaps = 0;
        bool is_first_one_found = false;
        for (int j = 0; j < length; j++)
        {
            int number;
            cin >> number;
            if (number == 0)
            {
                consecutive_zero_count++;
            }
            else
            {
                if (!is_first_one_found)
                {
                    is_first_one_found = true;
                }
                else
                {
                    sum_of_gaps += consecutive_zero_count;
                }
                consecutive_zero_count = 0;
            }
        }
        cout << sum_of_gaps << nl;
    }
    return 0;
}
