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

// Codeforces - Codeforces Round 725 (Div. 3)
// A. Stone Game

int main()
{

    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        int position_of_first = -1;
        int position_of_last = -1;
        for (int j = 0; j < length; j++)
        {
            int power;
            cin >> power;
            if (power == 1)
            {
                position_of_first = j;
            }
            else if (power == length)
            {
                position_of_last = j;
            }
        }
        int moves_for_left_left = max(position_of_first, position_of_last) + 1;
        int moves_for_right_right = length - min(position_of_first, position_of_last);
        int moves_for_left_right = length - position_of_first + position_of_last + 1;
        int moves_for_right_left = length - position_of_last + position_of_first + 1;
        cout << min({moves_for_left_left, moves_for_right_right, moves_for_left_right, moves_for_right_left}) << nl;
    }
    return 0;
}
