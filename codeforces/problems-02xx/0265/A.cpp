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

// Codeforces - Codeforces Round 162 (Div. 2)
// A. Colorful Stones (Simplified Edition)

int main()
{
    string stones;
    cin >> stones;
    string instructions;
    cin >> instructions;
    int position = 0;
    for (const auto &instruction : instructions)
    {
        if (stones[position] == instruction)
        {
            position++;
        }
    }
    cout << position + 1 << nl;
    return 0;
}
