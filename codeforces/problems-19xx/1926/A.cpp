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

// Codeforces - Codeforces Round 928 (Div. 4)
// A. Vlad and the Best of Five

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        string str;
        cin >> str;
        int count_a = (int)count(str.begin(), str.end(), 'A');
        if (count_a >= 3)
        {
            cout << "A" << nl;
        }
        else
        {
            cout << "B" << nl;
        }
    }
    return 0;
}
