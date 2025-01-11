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

// Codeforces - Codeforces Round 937 (Div. 4)
// C. Clock Conversion

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        string str;
        cin >> str;
        int hours = stoi(str.substr(0, 2));
        int minutes = stoi(str.substr(3, 2));
        bool past_noon = hours >= 12;
        if (hours == 0)
        {
            hours += 12;
        }
        else if (hours > 12)
        {
            hours -= 12;
        }
        cout << setfill('0') << setw(2) << hours << ":" << setw(2) << minutes << " " << (past_noon ? "PM" : "AM") << nl;
    }
    return 0;
}
