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

// Codeforces - Codeforces Round 382 (Div. 2)
// A. Ostap and Grasshopper

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    string strip;
    cin >> strip;
    int grasshopper_pos = (int)strip.find('G');
    int target_pos = (int)strip.find('T');
    if (grasshopper_pos > target_pos)
    {
        swap(grasshopper_pos, target_pos);
    }
    if ((target_pos - grasshopper_pos) % k != 0)
    {
        cout << "NO" << nl;
    }
    else
    {
        bool can_jump = true;
        for (int i = grasshopper_pos; i <= target_pos; i += k)
        {
            if (strip[i] == '#')
            {
                can_jump = false;
                break;
            }
        }
        cout << (can_jump ? "YES" : "NO") << nl;
    }
    return 0;
}
