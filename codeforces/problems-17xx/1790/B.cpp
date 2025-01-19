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

// Codeforces - Codeforces Round 847 (Div. 3)
// B. Taisia and Dice

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        int s;
        cin >> s;
        int r;
        cin >> r;
        int removed_dice = s - r;
        cout << removed_dice;
        for (int value = n - 1; value >= 1; value--)
        {
            int next_dice = min(r - value + 1, removed_dice);
            cout << ' ' << next_dice;
            r -= next_dice;
        }
        cout << nl;
    }
    return 0;
}
