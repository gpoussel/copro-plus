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

// Codeforces - Codeforces Round 827 (Div. 4)
// A. Sum

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int a;
        cin >> a;
        int b;
        cin >> b;
        int c;
        cin >> c;
        vector<int> numbers = {a, b, c};
        sort(numbers.begin(), numbers.end());
        cout << (numbers[2] == numbers[0] + numbers[1] ? "YES" : "NO") << nl;
    }
    return 0;
}
