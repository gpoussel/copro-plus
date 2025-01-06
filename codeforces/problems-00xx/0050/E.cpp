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
#include <set>
#include <string>
#include <vector>
using namespace std;

#define nl '\n'
#define deb(x) cerr << #x " = " << x << nl
#define EPSILON 1e-9
#define equals(a, b) (fabs(a - b) < EPSILON)
#define almost_equals(a, b) (fabs(a - b) < 1e-4)

// Codeforces - Codeforces Beta Round 47
// E. Square Equation Roots

bitset<5000001> visited;
int main()
{

    long long m, n;
    cin >> m >> n;
    long long sum = 0;
    for (long long i = 1; i <= m; ++i)
    {
        long long z = i * i;
        sum += min(z, n) * 2;
        for (long long j = i - 1; j >= 0; j--)
        {
            if (i * i - j * j > n)
            {
                break;
            }
            if (visited[i - j])
            {
                --sum;
            }
            else
            {
                visited[i - j] = 1;
            }
            if (visited[i + j])
            {
                --sum;
            }
            else
            {
                visited[i + j] = 1;
            }
        }
    }
    cout << sum << nl;
    return 0;
}
