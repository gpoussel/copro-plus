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

// Codeforces - Codeforces Round 871 (Div. 4)
// B. Blank Space

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        int longest_consecutive_blank = 0;
        int on_going_blank = 0;
        for (int j = 0; j < length; j++)
        {
            int number;
            cin >> number;
            if (number == 1)
            {
                longest_consecutive_blank = max(longest_consecutive_blank, on_going_blank);
                on_going_blank = 0;
            }
            else if (number == 0)
            {
                on_going_blank++;
            }
        }
        longest_consecutive_blank = max(longest_consecutive_blank, on_going_blank);
        cout << longest_consecutive_blank << nl;
    }
    return 0;
}