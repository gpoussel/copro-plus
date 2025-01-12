#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstring>
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

// Codeforces
// C. Lucky Numbers

const int mod = 998244353;

template <const int MOD>
struct modint
{
    int value;
    modint() = default;
    modint(int value_) : value(value_) {} // make sure value is less than MOD
    inline modint<MOD> operator+(modint<MOD> other) const
    {
        int c = this->value + other.value;
        return modint<MOD>(c >= MOD ? c - MOD : c);
    }
    inline modint<MOD> operator-(modint<MOD> other) const
    {
        int c = this->value - other.value;
        return modint<MOD>(c < 0 ? c + MOD : c);
    }
    inline modint<MOD> operator*(modint<MOD> other) const
    {
        int c = (long)this->value * other.value % MOD;
        return modint<MOD>(c < 0 ? c + MOD : c);
    }
    inline modint<MOD> &operator+=(modint<MOD> other)
    {
        this->value += other.value;
        if (this->value >= MOD)
            this->value -= MOD;
        return *this;
    }
    inline modint<MOD> &operator-=(modint<MOD> other)
    {
        this->value -= other.value;
        if (this->value < 0)
            this->value += MOD;
        return *this;
    }
    inline modint<MOD> &operator*=(modint<MOD> other)
    {
        this->value = (long)this->value * other.value % MOD;
        if (this->value < 0)
            this->value += MOD;
        return *this;
    }
    inline modint<MOD> operator-() const { return modint<MOD>(this->value ? MOD - this->value : 0); }
    modint<MOD> pow(long k) const
    {
        modint<MOD> x = *this, y = 1;
        for (; k; k >>= 1)
        {
            if (k & 1)
                y *= x;
            x *= x;
        }
        return y;
    }
    modint<MOD> inv() const { return pow(MOD - 2); } // MOD must be a prime
    inline modint<MOD> operator/(modint<MOD> other) const { return *this * other.inv(); }
    inline modint<MOD> operator/=(modint<MOD> other) { return *this *= other.inv(); }
    inline bool operator==(modint<MOD> other) const { return value == other.value; }
    inline bool operator!=(modint<MOD> other) const { return value != other.value; }
    inline bool operator<(modint<MOD> other) const { return value < other.value; }
    inline bool operator>(modint<MOD> other) const { return value > other.value; }
};
template <int MOD>
modint<MOD> operator*(long value, modint<MOD> n) { return modint<MOD>(value) * n; }
template <int MOD>
modint<MOD> operator*(int value, modint<MOD> n) { return modint<MOD>(value % MOD) * n; }
template <int MOD>
istream &operator>>(istream &in, modint<MOD> &n) { return in >> n.value; }
template <int MOD>
ostream &operator<<(ostream &out, modint<MOD> n) { return out << n.value; }

using mint = modint<mod>;

mint dp[102][2][2][2];

mint solve(string &number, int i, bool prefix, bool good, bool start)
{
    if (i == (int)number.size())
        return good && !start;
    mint &res = dp[i][prefix][good][start];
    if (~res.value)
        return res;
    res = 0;
    for (int d = 0; d <= (prefix ? number[i] - '0' : 9); d++)
    {
        int next_i = i + 1;
        bool next_prefix = prefix && (d == number[i] - '0');
        bool next_start = start && (d == 0);
        bool next_good = good && (d == 4 || d == 7 || next_start);
        res += solve(number, next_i, next_prefix, next_good, next_start);
    }
    return res;
}

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        string number;
        cin >> number;
        memset(dp, -1, sizeof(dp));
        cout << solve(number, 0, true, true, true) << nl;
    }
}
