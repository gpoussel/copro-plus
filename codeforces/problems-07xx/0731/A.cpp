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

// Codeforces - Codeforces Round 376 (Div. 2)
// A. Night at the Museum

int main()
{
    string str;
    cin >> str;
    int position = 0;
    int moves = 0;
    for (int i = 0; i < (int)str.size(); i++)
    {
        int nextPosition = str[i] - 'a';
        int diff = abs(nextPosition - position);
        moves += min(diff, 26 - diff);
        position = nextPosition;
    }
    cout << moves << nl;
    return 0;
}
