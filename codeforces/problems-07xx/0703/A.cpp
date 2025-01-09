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

// Codeforces - Codeforces Round 365 (Div. 2)
// A. Mishka and Game

int main()
{
    int test_cases;
    cin >> test_cases;

    int mishka = 0;
    int chris = 0;
    for (int i = 0; i < test_cases; i++)
    {
        int m;
        cin >> m;
        int c;
        cin >> c;
        if (m > c)
        {
            mishka++;
        }
        else if (c > m)
        {
            chris++;
        }
    }
    if (mishka > chris)
    {
        cout << "Mishka" << nl;
    }
    else if (chris > mishka)
    {
        cout << "Chris" << nl;
    }
    else
    {
        cout << "Friendship is magic!^^" << nl;
    }
    return 0;
}
