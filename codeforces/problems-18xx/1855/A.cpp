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

// Codeforces - Codeforces Round 889 (Div. 2)
// A. Dalton the Teacher

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        int unhappy_students = 0;
        for (int j = 0; j < n; j++)
        {
            int number;
            cin >> number;
            if (number == j + 1)
            {
                unhappy_students++;
            }
        }
        if (unhappy_students % 2 == 0)
        {
            cout << unhappy_students / 2 << nl;
        }
        else
        {
            cout << (unhappy_students + 1) / 2 << nl;
        }
    }
    return 0;
}
