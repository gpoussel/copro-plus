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

// Codeforces - Codeforces Round 957 (Div. 3)
// A. Only Pluses

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
        vector<int> numbers = {a, b, c};
        int increase_count = 5;
        while (increase_count > 0)
        {
            sort(numbers.begin(), numbers.end());
            numbers[0]++;
            increase_count--;
        }
        cout << accumulate(numbers.begin(), numbers.end(), 1, multiplies<int>()) << nl;
    }
    return 0;
}
