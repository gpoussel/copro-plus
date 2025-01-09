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

// Codeforces - Educational Codeforces Round 110 (Rated for Div. 2)
// A. Fair Playoff

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int a;
        cin >> a;
        int b;
        cin >> b;
        int c;
        cin >> c;
        int d;
        cin >> d;

        vector<int> numbers = {a, b, c, d};
        sort(numbers.begin(), numbers.end());
        pair<int, int> finalists = {max(a, b), max(c, d)};
        if (finalists.first > finalists.second)
        {
            swap(finalists.first, finalists.second);
        }
        if (numbers[2] == finalists.first && numbers[3] == finalists.second)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
    return 0;
}
