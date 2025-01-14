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

// Codeforces - Codeforces Round 962 (Div. 3)
// B. Scale

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        vector<string> lines(n);
        for (int j = 0; j < n; j++)
        {
            string line;
            cin >> line;
            if (j % k == 0)
            {
                for (int l = 0; l < n; l += k)
                {
                    cout << line[l];
                }
                cout << nl;
            }
        }
    }
    return 0;
}
