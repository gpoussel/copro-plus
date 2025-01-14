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

// Codeforces - Codeforces Round 787 (Div. 3)
// A. Food for Animals

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        long long a;
        cin >> a;
        long long b;
        cin >> b;
        long long c;
        cin >> c;
        long long x;
        cin >> x;
        long long y;
        cin >> y;

        long long dogs_with_dog_food = min(a, x);
        a -= dogs_with_dog_food;
        x -= dogs_with_dog_food;
        long long cats_with_cat_food = min(b, y);
        b -= cats_with_cat_food;
        y -= cats_with_cat_food;
        if (x > 0)
        {
            long long dogs_with_universal_food = min(x, c);
            c -= dogs_with_universal_food;
            x -= dogs_with_universal_food;
        }
        if (y > 0)
        {
            long long cats_with_universal_food = min(y, c);
            c -= cats_with_universal_food;
            y -= cats_with_universal_food;
        }
        cout << (x == 0 && y == 0 ? "YES" : "NO") << nl;
    }
    return 0;
}
