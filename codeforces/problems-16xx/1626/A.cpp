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

// Codeforces - Educational Codeforces Round 121 (Rated for Div. 2)
// A. Equidistant Letters

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        string str;
        cin >> str;
        set<char> single_letters;
        set<char> double_letters;
        for (char c : str)
        {
            if (single_letters.contains(c))
            {
                single_letters.erase(c);
                double_letters.insert(c);
            }
            else
            {
                single_letters.insert(c);
            }
        }
        for (char c : single_letters)
        {
            cout << c;
        }
        for (char c : double_letters)
        {
            cout << c << c;
        }
        cout << nl;
    }
    return 0;
}
