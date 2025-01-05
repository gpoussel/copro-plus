#include <algorithm>
#include <array>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <map>
#include <numbers>
#include <set>
#include <string>
#include <vector>
using namespace std;

#define nl '\n'
#define deb(x) cerr << #x " = " << x << nl
#define EPSILON 1e-9
#define equals(a, b) (fabs(a - b) < EPSILON)
#define almost_equals(a, b) (fabs(a - b) < 1e-4)

// Codeforces - Codeforces Round 173 (Div. 2)
// B. Painting Eggs

struct Egg
{
    int a, g;
};

int main()
{
    int n;
    cin >> n;

    vector<Egg> eggs;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        eggs.push_back({a, b});
    }

    int diff = 0;
    string result = "";
    for (int i = 0; i < n; i++)
    {
        int diff_a = diff + eggs[i].a;
        int diff_g = diff - eggs[i].g;

        if (abs(diff_a) <= 500)
        {
            diff = diff_a;
            result += "A";
        }
        else
        {
            diff = diff_g;
            result += "G";
        }
    }
    if (abs(diff) > 500)
    {
        cout << -1 << nl;
    }
    else
    {
        cout << result << nl;
    }
    return 0;
}
