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

// Codeforces - Codeforces Round 817 (Div. 4)
// B. Colourblindness

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        string str1;
        cin >> str1;
        string str2;
        cin >> str2;
        replace(str1.begin(), str1.end(), 'G', 'B');
        replace(str2.begin(), str2.end(), 'G', 'B');
        cout << (str1 == str2 ? "YES" : "NO") << nl;
    }
    return 0;
}
