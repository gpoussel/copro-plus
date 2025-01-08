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

// Codeforces - Codeforces Round 268 (Div. 2)
// A. I Wanna Be the Guy

int main()
{
    int n;
    cin >> n;
    set<int> levels;
    for (int i = 0; i < 2; ++i)
    {
        int p;
        cin >> p;
        for (int j = 0; j < p; ++j)
        {
            int level;
            cin >> level;
            levels.insert(level);
        }
    }
    if ((int)levels.size() == n)
    {
        cout << "I become the guy." << nl;
    }
    else
    {
        cout << "Oh, my keyboard!" << nl;
    }
    return 0;
}
