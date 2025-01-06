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

// Codeforces - Codeforces Round 197 (Div. 2)
// A. Helpful Maths

vector<string> split(const string &s, char delim)
{
    vector<string> result;
    stringstream ss(s);
    string item;
    while (getline(ss, item, delim))
    {
        result.push_back(item);
    }
    return result;
}

const string join(vector<string> v, const char delim)
{
    return accumulate(begin(v), end(v), string(),
                      [delim](const string &ss, const string &s)
                      {
                          return ss.empty() ? s : ss + delim + s;
                      });
}

int main()
{
    string str;
    cin >> str;
    auto parts = split(str, '+');
    sort(parts.begin(), parts.end(), [](const string &lhs, const string &rhs)
         { return stoi(lhs) < stoi(rhs); });
    cout << join(parts, '+') << nl;
    return 0;
}
