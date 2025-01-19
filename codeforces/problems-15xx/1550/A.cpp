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

// Codeforces - Educational Codeforces Round 111 (Rated for Div. 2)
// A. Find The Array

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int s;
        cin >> s;
        int answer = 1;
        int current = 1;
        int sum = 1;
        while (sum < s)
        {
            current += 2;
            sum += current;
            answer++;
        }
        cout << answer << nl;
    }
    return 0;
}
