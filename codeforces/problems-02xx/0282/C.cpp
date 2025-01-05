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
// C. XOR and OR

bool can_be_transformed(string a, string b)
{
    if (a.size() != b.size())
    {
        return false;
    }
    if (a == b)
    {
        return true;
    }
    if (a.size() == 1)
    {
        return false;
    }
    int count_a_1 = (int)count(a.begin(), a.end(), '1');
    int count_b_1 = (int)count(b.begin(), b.end(), '1');
    return (count_a_1 > 0) == (count_b_1 > 0);
}

int main()
{
    string a, b;
    cin >> a >> b;
    cout << (can_be_transformed(a, b) ? "YES" : "NO") << nl;
    return 0;
}
