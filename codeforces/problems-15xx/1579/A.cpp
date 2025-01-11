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

// Codeforces - Codeforces Round 744 (Div. 3)
// A. Casimir's String Solitaire

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        string str;
        cin >> str;
        int count_a = 0;
        int count_b = 0;
        int count_c = 0;
        for (char ch : str)
        {
            if (ch == 'A')
            {
                count_a++;
            }
            else if (ch == 'B')
            {
                count_b++;
            }
            else
            {
                count_c++;
            }
        }
        if (count_a + count_c == count_b)
        {
            cout << "YES" << nl;
        }
        else
        {
            cout << "NO" << nl;
        }
    }
    return 0;
}
