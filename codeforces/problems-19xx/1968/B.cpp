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

// Codeforces - Codeforces Round 943 (Div. 3)
// B. Prefiquence

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
        string a;
        cin >> a;
        string b;
        cin >> b;
        int index_a = 0;
        for (int j = 0; j < m && index_a < n; ++j)
        {
            if (b[j] == a[index_a])
            {
                ++index_a;
            }
        }
        cout << index_a << nl;
    }
    return 0;
}
