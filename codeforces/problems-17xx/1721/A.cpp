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

// Codeforces - Educational Codeforces Round 134 (Rated for Div. 2)
// A. Image

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        string line1;
        cin >> line1;
        string line2;
        cin >> line2;
        map<char, int> frequencies;
        for (char c : line1)
        {
            frequencies[c]++;
        }
        for (char c : line2)
        {
            frequencies[c]++;
        }
        cout << (int)frequencies.size() - 1 << nl;
    }
    return 0;
}
