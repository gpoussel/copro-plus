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

// Codeforces - Codeforces Round 912 (Div. 2)
// A. Halloumi Boxes

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
        vector<long long> numbers(n);
        bool sorted = true;
        for (int j = 0; j < n; j++)
        {
            cin >> numbers[j];
            if (j > 0 && numbers[j] < numbers[j - 1])
            {
                sorted = false;
            }
        }
        if (sorted)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << (k > 1 ? "YES" : "NO") << nl;
        }
    }
    return 0;
}
