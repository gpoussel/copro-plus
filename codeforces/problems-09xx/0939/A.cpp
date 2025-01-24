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

// Codeforces - Codeforces Round 464 (Div. 2)
// A. Love Triangle

int main()
{
    int length;
    cin >> length;
    map<int, int> loved_planes;
    for (int j = 0; j < length; j++)
    {
        int number;
        cin >> number;
        loved_planes[j + 1] = number;
    }
    bool found = false;
    for (int i = 1; i <= length; i++)
    {
        int first = i;
        int second = loved_planes[first];
        int third = loved_planes[second];
        if (loved_planes[third] == first)
        {
            found = true;
            break;
        }
    }
    cout << (found ? "YES" : "NO") << nl;
    return 0;
}
