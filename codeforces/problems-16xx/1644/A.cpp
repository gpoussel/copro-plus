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

// Codeforces - Educational Codeforces Round 123 (Rated for Div. 2)
// A. Doors and Keys

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        string str;
        cin >> str;
        bool possible = true;
        set<char> openable_doors;
        for (char c : str)
        {
            if (islower(c))
            {
                openable_doors.insert((char)toupper(c));
            }
            else
            {
                if (!openable_doors.contains(c))
                {
                    possible = false;
                    break;
                }
            }
        }
        cout << (possible ? "YES" : "NO") << nl;
    }
    return 0;
}
