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

// Codeforces - Codeforces Round 640 (Div. 4)
// A. Sum of Round Numbers

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
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;
        int power_of_10 = 0;
        vector<string> summands;
        while (n > 0)
        {
            if (n < 10 || n % 10 != 0)
            {
                summands.push_back(to_string((n % 10) * (int)pow(10, power_of_10)));
            }
            n /= 10;
            ++power_of_10;
        }
        cout << summands.size() << nl;
        cout << join(summands, ' ') << nl;
    }
    return 0;
}
