#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

// Codeforces - Codeforces Beta Round 1
// A. Theatre Square

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;
    cout << ((n + a - 1) / a) * ((m + a - 1) / a) << endl;
    return 0;
}
