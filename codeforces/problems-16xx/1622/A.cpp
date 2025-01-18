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

// Codeforces - Educational Codeforces Round 120 (Rated for Div. 2)
// A. Construct a Rectangle

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        vector<long long> numbers(3);
        for (int j = 0; j < 3; j++)
        {
            cin >> numbers[j];
        }
        sort(numbers.begin(), numbers.end());
        if (numbers[0] == numbers[1])
        {
            cout << (numbers[2] % 2 == 0 ? "YES" : "NO") << nl;
            continue;
        }
        if (numbers[1] == numbers[2])
        {
            cout << (numbers[0] % 2 == 0 ? "YES" : "NO") << nl;
            continue;
        }
        cout << (numbers[2] == numbers[0] + numbers[1] ? "YES" : "NO") << nl;
    }
    return 0;
}
