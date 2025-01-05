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

// Codeforces - Codeforces Beta Round 65 (Div. 2)
// A. Way Too Long Words

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        string word;
        cin >> word;
        if (word.size() > 10)
        {
            cout << word[0] << word.size() - 2 << word[word.size() - 1] << nl;
        }
        else
        {
            cout << word << nl;
        }
    }
    return 0;
}
