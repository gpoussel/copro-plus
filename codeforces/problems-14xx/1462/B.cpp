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
#include <regex>
#include <set>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

#define nl '\n'
#define deb(x) cerr << #x " = " << x << nl
#define EPSILON 1e-9

// Codeforces - Codeforces Round 690 (Div. 3)
// B. Last Year's Substring

int main()
{
    vector<regex> regexes = {
        regex("^.*2020$"),
        regex("^2.*020$"),
        regex("^20.*20$"),
        regex("^202.*0$"),
        regex("^2020.*$")};
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        bool possible = any_of(regexes.begin(), regexes.end(), [&](regex &r)
                               { return regex_search(str, r); });
        cout << (possible ? "YES" : "NO") << nl;
    }
    return 0;
}
