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

// Codeforces - Educational Codeforces Round 160 (Rated for Div. 2)
// A. Rating Increase

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        string str;
        cin >> str;
        bool found = false;
        for (int j = 0, k = 1; k < (int)str.size(); k++)
        {
            string s1 = str.substr(j, k);
            string s2 = str.substr(k, (int)str.size() - k);
            if (s2[0] != '0' && stoi(s2) > stoi(s1))
            {
                found = true;
                cout << s1 << ' ' << s2 << nl;
                break;
            }
        }
        if (!found)
        {
            cout << -1 << nl;
        }
    }
    return 0;
}
