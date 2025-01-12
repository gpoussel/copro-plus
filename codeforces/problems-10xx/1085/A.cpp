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

// Codeforces - Technocup 2019 - Elimination Round 4
// A. Right-Left Cipher

int main()
{
    string t;
    cin >> t;
    string word;
    int length = (int)t.size();
    for (int i = 0; i < length; ++i)
    {
        if (i % 2 == length % 2)
        {
            word = t[length - i / 2 - 1] + word;
        }
        else
        {
            word = t[i / 2] + word;
        }
    }
    cout << word << nl;
    return 0;
}
