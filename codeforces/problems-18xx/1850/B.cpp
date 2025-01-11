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

// Codeforces - Codeforces Round 886 (Div. 4)
// B. Ten Words of Wisdom

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        int best_index_so_far = -1;
        int best_quality_so_far = -1;
        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            int b;
            cin >> b;
            if (a <= 10 && b > best_quality_so_far)
            {
                best_index_so_far = j;
                best_quality_so_far = b;
            }
        }
        cout << best_index_so_far + 1 << nl;
    }
    return 0;
}
