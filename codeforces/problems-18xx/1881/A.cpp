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

// Codeforces - Codeforces Round 903 (Div. 3)
// A. Don't Try to Count

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        int m;
        cin >> m;
        string x;
        cin >> x;
        string s;
        cin >> s;
        int count = 0;
        while ((x.size() <= s.size() * 2 || count == 0) && x.find(s) == string::npos)
        {
            x += x;
            ++count;
        }
        if (x.find(s) == string::npos)
        {
            cout << -1 << nl;
            continue;
        }
        cout << count << nl;
    }
    return 0;
}
