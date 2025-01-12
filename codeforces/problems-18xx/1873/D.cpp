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

// Codeforces - Codeforces Round 898 (Div. 4)
// D. 1D Eraser

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        string strip;
        cin >> strip;
        int number_of_erasures = 0;
        int erased_until = -1;
        for (int j = 0; j < n; ++j)
        {
            if (j < erased_until)
            {
                continue;
            }
            erased_until = -1;
            if (strip[j] == 'B')
            {
                number_of_erasures++;
                erased_until = j + k;
            }
        }
        cout << number_of_erasures << nl;
    }
    return 0;
}
