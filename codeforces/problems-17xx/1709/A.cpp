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

// Codeforces - Educational Codeforces Round 132 (Rated for Div. 2)
// A. Three Doors

bool can_open_all_doors(int key_in_hand, const vector<int> &doors)
{
    int first_door = doors[key_in_hand - 1];
    if (first_door == 0)
    {
        return false;
    }
    int second_door = doors[first_door - 1];
    return second_door != 0;
}

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int key_in_hand;
        cin >> key_in_hand;
        vector<int> doors(3);
        for (int j = 0; j < 3; j++)
        {
            cin >> doors[j];
        }
        cout << (can_open_all_doors(key_in_hand, doors) ? "YES" : "NO") << nl;
    }
    return 0;
}
