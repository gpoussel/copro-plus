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

// Codeforces - Codeforces Round 295 (Div. 2)
// A. Pangram

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    set<int> letters;
    for (int i = 0; i < n; ++i)
    {
        letters.insert(tolower(str[i]));
    }
    if (letters.size() == 26)
    {
        cout << "YES" << nl;
    }
    else
    {
        cout << "NO" << nl;
    }
    return 0;
}
