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

// Codeforces - Codeforces Round 164 (Div. 2)
// A. Games

int main()
{
    int n;
    cin >> n;
    vector<int> home_colors;
    vector<int> guest_colors;
    for (int i = 0; i < n; ++i)
    {
        int home;
        cin >> home;
        home_colors.push_back(home);

        int guest;
        cin >> guest;
        guest_colors.push_back(guest);
    }
    int answer = 0;
    for (int i = 0; i < n; ++i)
    {
        answer += (int)count(home_colors.begin(), home_colors.end(), guest_colors[i]);
    }
    cout << answer << nl;
    return 0;
}
