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

// Codeforces - Codeforces Round 918 (Div. 4)
// C. Can I Square?

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int buckets;
        cin >> buckets;
        long long sum = 0;
        for (int j = 0; j < buckets; j++)
        {
            long long a;
            cin >> a;
            sum += a;
        }
        long long square_root = (long long)sqrt(sum);
        cout << (square_root * square_root == sum ? "YES" : "NO") << nl;
    }
    return 0;
}
