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

// Codeforces - Codeforces Round 141 (Div. 2)
// A. Is your horseshoe on the other hoof?

int main()
{
    long long s1;
    cin >> s1;
    long long s2;
    cin >> s2;
    long long s3;
    cin >> s3;
    long long s4;
    cin >> s4;

    set<long long> colors;
    colors.insert(s1);
    colors.insert(s2);
    colors.insert(s3);
    colors.insert(s4);
    cout << 4 - colors.size() << nl;
    return 0;
}
