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

// Codeforces - Codeforces Round 966 (Div. 3)
// B. Seating in a Bus

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        set<int> occupied_seats;
        bool valid = true;
        for (int j = 0; j < length; j++)
        {
            int seat;
            cin >> seat;
            if (occupied_seats.size() > 0 && !occupied_seats.contains(seat - 1) && !occupied_seats.contains(seat + 1))
            {
                valid = false;
            }
            occupied_seats.insert(seat);
        }
        cout << (valid ? "YES" : "NO") << nl;
    }
    return 0;
}
