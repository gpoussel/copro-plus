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

// Codeforces - Codeforces Round 944 (Div. 4)
// B. Different String

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        string str;
        cin >> str;
        string copy = str;
        sort(copy.begin(), copy.end());
        if (copy != str)
        {
            cout << "YES" << nl;
            cout << copy << nl;
        }
        else
        {
            swap(copy[0], copy[copy.size() - 1]);
            if (copy != str)
            {
                cout << "YES" << nl;
                cout << copy << nl;
            }
            else
            {
                cout << "NO" << nl;
            }
        }
    }
    return 0;
}
