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

// Codeforces - Codeforces Round 700 (Div. 2)
// A. Yet Another String Game

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < (int)str.size(); ++j)
        {
            if (j % 2 == 0)
            {
                // Alice
                str[j] = (str[j] == 'a') ? 'b' : 'a';
            }
            else
            {
                // Bob
                str[j] = (str[j] == 'z') ? 'y' : 'z';
            }
        }
        cout << str << nl;
    }
    return 0;
}
