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

// Codeforces - Codeforces Round 756 (Div. 3)
// B. Team Composition: Programmers and Mathematicians

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        long long a;
        cin >> a;
        long long b;
        cin >> b;

        long long max_number_of_teams = (a + b) / 4LL;
        cout << min(a, min(b, max_number_of_teams)) << nl;
    }
    return 0;
}
