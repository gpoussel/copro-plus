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

// Codeforces - Codeforces Round 991 (Div. 3)
// A. Line Breaks

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        int m;
        cin >> m;
        int number_of_words = 0;
        bool writing_on_first_strip = true;
        for (int j = 0; j < n; ++j)
        {
            string word;
            cin >> word;
            if ((int)word.size() <= m && writing_on_first_strip)
            {
                number_of_words++;
                m -= (int)word.size();
            }
            else
            {
                writing_on_first_strip = false;
            }
        }
        cout << number_of_words << nl;
    }
    return 0;
}
