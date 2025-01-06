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

// Codeforces - Codeforces Beta Round 47
// D. Bombing

int sign(double x) { return (x > EPSILON) - (x < -EPSILON); }
struct PT
{
    double x, y;
    PT() { x = 0, y = 0; }
    PT(double x, double y) : x(x), y(y) {}
    PT(const PT &p) : x(p.x), y(p.y) {}
    PT operator+(const PT &a) const { return PT(x + a.x, y + a.y); }
    PT operator-(const PT &a) const { return PT(x - a.x, y - a.y); }
    PT operator*(const double a) const { return PT(x * a, y * a); }
    friend PT operator*(const double &a, const PT &b) { return PT(a * b.x, a * b.y); }
    PT operator/(const double a) const { return PT(x / a, y / a); }
    bool operator==(PT a) const { return sign(a.x - x) == 0 && sign(a.y - y) == 0; }
    bool operator!=(PT a) const { return !(*this == a); }
    bool operator<(PT a) const { return sign(a.x - x) == 0 ? y < a.y : x < a.x; }
    bool operator>(PT a) const { return sign(a.x - x) == 0 ? y > a.y : x > a.x; }
    const PT &operator=(const PT &a)
    {
        x = a.x, y = a.y;
        return *this;
    }
    double norm() { return sqrt(x * x + y * y); }
    double norm2() { return x * x + y * y; }
    PT perp() { return PT(-y, x); }
    double arg() { return atan2(y, x); }
    PT truncate(double r)
    { // returns a vector with norm r and having same direction
        double k = norm();
        if (!sign(k))
            return *this;
        r /= k;
        return PT(x * r, y * r);
    }
};
istream &operator>>(istream &in, PT &p) { return in >> p.x >> p.y; }
ostream &operator<<(ostream &out, PT &p) { return out << "(" << p.x << "," << p.y << ")"; }
inline double dot(PT a, PT b) { return a.x * b.x + a.y * b.y; }
inline double dist2(PT a, PT b) { return dot(a - b, a - b); }
inline double dist(PT a, PT b) { return sqrt(dot(a - b, a - b)); }

double proba(PT &target, PT &enemy, double radius)
{
    double d = dist(target, enemy);
    if (d <= radius)
    {
        return 1;
    }
    return exp(1 - (d * d) / (radius * radius));
}

double compute_probability(vector<PT> &objects, PT &target, long long possible_missing_targets, double radius)
{
    vector<vector<double>> dp(objects.size() + 2, vector<double>(possible_missing_targets + 1, 0));
    dp[0][0] = 1;
    for (size_t i = 1; i <= objects.size(); ++i)
    {
        double p = proba(target, objects[i - 1], radius);
        dp[i][0] = dp[i - 1][0] * p;
        for (int j = 1; j < possible_missing_targets; ++j)
        {
            dp[i][j] = dp[i - 1][j] * p + dp[i - 1][j - 1] * (1 - p);
        }
    }
    double sum = 0;
    for (int i = 0; i < possible_missing_targets; ++i)
    {
        sum += dp[objects.size()][i];
    }
    return sum;
}

int main()
{
    int n, k, epsilon;
    cin >> n >> k >> epsilon;
    PT target;
    cin >> target;
    vector<PT> objects(n);
    double max_distance = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> objects[i];
        max_distance = max(max_distance, dist(objects[i], target));
    }

    double min_dicho = 0;
    double max_dicho = max_distance;
    for (int tries = 0; tries < 100; ++tries)
    {
        double middle = (min_dicho + max_dicho) / 2;
        double probability = compute_probability(objects, target, n - k + 1, middle);

        if (probability >= (1 - epsilon / 1000.0))
        {
            // Radius is too big
            max_dicho = middle;
        }
        else
        {
            // Radius is not big enough
            min_dicho = middle;
        }
    }

    cout << setprecision(12) << (min_dicho + max_dicho) / 2 << nl;
    return 0;
}
