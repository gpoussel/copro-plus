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

// Codeforces - Codeforces Round 768 (Div. 2)
// A. Min Max Swap

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        vector<int> a(length);
        vector<int> b(length);
        for (int j = 0; j < length; j++)
        {
            cin >> a[j];
        }
        for (int j = 0; j < length; j++)
        {
            cin >> b[j];
            if (b[j] < a[j])
            {
                swap(a[j], b[j]);
            }
        }
        int max_a = *max_element(a.begin(), a.end());
        int max_b = *max_element(b.begin(), b.end());
        cout << max_a * max_b << nl;
    }
    return 0;
}
