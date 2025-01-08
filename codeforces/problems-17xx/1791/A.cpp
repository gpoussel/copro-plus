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

// Codeforces - Codeforces Round 849 (Div. 4)
// A. Codeforces Checking

int main()
{
    int test_cases;
    cin >> test_cases;
    set<char> characters = {'c', 'o', 'd', 'e', 'f', 'r', 's'};
    for (int i = 0; i < test_cases; i++)
    {
        string character;
        cin >> character;
        cout << (find(characters.begin(), characters.end(), character[0]) != characters.end() ? "YES" : "NO") << nl;
    }
    return 0;
}
