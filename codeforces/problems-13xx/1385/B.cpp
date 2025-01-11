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

// Codeforces - Codeforces Round 656 (Div. 3)
// B. Restore the Permutation by Merger

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        vector<int> permutation;
        set<int> seen;
        for (int j = 0; j < 2 * length; j++)
        {
            int number;
            cin >> number;
            if (!seen.contains(number))
            {
                permutation.push_back(number);
                seen.insert(number);
            }
        }
        for (int j = 0; j < length; j++)
        {
            cout << (j > 0 ? " " : "") << permutation[j];
        }
        cout << nl;
    }
    return 0;
}
