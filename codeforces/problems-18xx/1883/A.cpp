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

// Codeforces - Codeforces Round 905 (Div. 3)
// A. Morning

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        string code;
        cin >> code;
        int position = 1;
        int time = 0;
        for (int j = 0; j < (int)code.size(); j++)
        {
            int digit = code[j] - '0';
            int digit_position = digit == 0 ? 10 : digit;
            time += abs(position - digit_position);
            position = digit_position;
            time++;
        }
        cout << time << nl;
    }
    return 0;
}
