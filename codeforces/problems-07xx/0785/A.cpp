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

// Codeforces - Codeforces Round 404 (Div. 2)
// A. Anton and Polyhedrons

int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        string polyhedron;
        cin >> polyhedron;
        if (polyhedron[0] == 'T')
        {
            count += 4;
        }
        else if (polyhedron[0] == 'C')
        {
            count += 6;
        }
        else if (polyhedron[0] == 'O')
        {
            count += 8;
        }
        else if (polyhedron[0] == 'D')
        {
            count += 12;
        }
        else if (polyhedron[0] == 'I')
        {
            count += 20;
        }
    }
    cout << count << nl;
    return 0;
}
