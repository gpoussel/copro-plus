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

// Codeforces - Codeforces Round 995 (Div. 3)
// A. Preparing for the Olympiad

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        vector<int> a(length);
        for (int j = 0; j < length; j++)
        {
            cin >> a[j];
        }
        vector<int> b(length);
        for (int j = 0; j < length; j++)
        {
            cin >> b[j];
        }
        int difference = 0;
        for (int j = 0; j < length - 1; j++)
        {
            if (a[j] > b[j + 1])
            {
                difference += a[j] - b[j + 1];
            }
        }
        difference += a[length - 1];
        cout << difference << nl;
    }
    return 0;
}
