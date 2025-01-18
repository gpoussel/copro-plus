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

// Codeforces - Codeforces Round 742 (Div. 2)
// A. Domino Disaster

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        for (int j = 0; j < n; j++)
        {
            if (str[j] == 'U')
            {
                cout << 'D';
            }
            else if (str[j] == 'D')
            {
                cout << 'U';
            }
            else
            {
                cout << str[j];
            }
        }
        cout << nl;
    }
    return 0;
}
