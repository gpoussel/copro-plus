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

// Codeforces - Codeforces Round 971 (Div. 4)
// B. osu!mania

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
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        vector<int> positions;
        for (int j = 0; j < n; ++j)
        {
            string line;
            cin >> line;
            positions.push_back((int)line.find('#'));
        }
        reverse(positions.begin(), positions.end());
        for (int j = 0; j < (int)positions.size(); ++j)
        {
            cout << (j > 0 ? " " : "") << positions[j] + 1;
        }
        cout << nl;
    }
    return 0;
}
