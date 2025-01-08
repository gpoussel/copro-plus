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

// Codeforces - Codeforces Beta Round 32 (Div. 2, Codeforces format)
// B. Borze

int main()
{
    string str;
    cin >> str;
    int i = 0;
    while (i < (int)str.size())
    {
        if (str[i] == '.')
        {
            cout << 0;
            i++;
        }
        else if (str[i] == '-' && str[i + 1] == '.')
        {
            cout << 1;
            i += 2;
        }
        else if (str[i] == '-' && str[i + 1] == '-')
        {
            cout << 2;
            i += 2;
        }
    }
    cout << nl;
    return 0;
}
