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

// Codeforces - Codeforces Round 146 (Div. 2)
// A. Boy or Girl

int main()
{
    string s;
    cin >> s;
    set<char> unique_characters(s.begin(), s.end());
    if (unique_characters.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << nl;
    }
    else
    {
        cout << "IGNORE HIM!" << nl;
    }
    return 0;
}
