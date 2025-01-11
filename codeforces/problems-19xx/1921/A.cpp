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

// Codeforces - Codeforces Round 920 (Div. 3)
// A. Square

int sign(long long x) { return x > 0; }
struct PT
{
    long long x, y;
    PT() {}
    PT(long long _x, long long _y) : x(_x), y(_y) {}
    PT operator-(const PT &a) const { return PT(x - a.x, y - a.y); }
    long long dot(const PT &a) const { return x * a.x + y * a.y; }
    long long dot(const PT &a, const PT &b) const { return (a - *this).dot(b - *this); }
    long long cross(const PT &a) const { return x * a.y - y * a.x; }
    long long cross(const PT &a, const PT &b) const { return (a - *this).cross(b - *this); }
    bool operator==(const PT &a) const { return a.x == x && a.y == y; }
    bool operator<(PT a) const { return sign(a.x - x) == 0 ? y < a.y : x < a.x; }
};
istream &operator>>(istream &in, PT &p) { return in >> p.x >> p.y; }

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        vector<PT> points(4);
        for (int j = 0; j < 4; j++)
        {
            cin >> points[j];
        }
        sort(points.begin(), points.end());
        long long area = (points[0] - points[1]).dot(points[0] - points[1]);
        cout << area << nl;
    }
    return 0;
}
