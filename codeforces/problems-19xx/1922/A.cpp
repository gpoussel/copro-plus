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

// Codeforces - Educational Codeforces Round 161 (Rated for Div. 2)
// A. Tricky Template

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        vector<string> words(3);
        cin >> words[0] >> words[1] >> words[2];
        bool possible = false;
        for (int j = 0; j < n; ++j)
        {
            if (words[2][j] != words[0][j] && words[2][j] != words[1][j])
            {
                possible = true;
            }
        }
        cout << (possible ? "YES" : "NO") << nl;
    }
    return 0;
}
