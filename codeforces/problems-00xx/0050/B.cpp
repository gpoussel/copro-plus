#include <algorithm>
#include <array>
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
// B. Choosing Symbol Pairs

int main()
{
    string s;
    cin >> s;

    map<char, long long> char_indexes;
    for (size_t i = 0; i < s.size(); i++)
    {
        char_indexes[s[i]]++;
    }

    long long number_of_pairs = 0;
    for (auto &p : char_indexes)
    {
        number_of_pairs += p.second * p.second;
    }
    cout << number_of_pairs << nl;
    return 0;
}
