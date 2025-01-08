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

// Codeforces - Codeforces Round 552 (Div. 3)
// A. Restoring Three Numbers

int main()
{
    int x1;
    cin >> x1;
    int x2;
    cin >> x2;
    int x3;
    cin >> x3;
    int x4;
    cin >> x4;
    vector<int> numbers = {x1, x2, x3, x4};
    sort(numbers.begin(), numbers.end());
    for (int i = 0; i < 3; ++i)
    {
        cout << numbers[3] - numbers[i] << " ";
    }
    cout << nl;
    return 0;
}
