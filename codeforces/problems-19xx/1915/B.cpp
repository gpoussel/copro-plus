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

// Codeforces - Codeforces Round 918 (Div. 4)
// B. Not Quite Latin Square

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        for (int j = 0; j < 3; ++j)
        {
            string line;
            cin >> line;
            set<char> characters = {line[0], line[1], line[2]};
            if (characters.contains('?'))
            {
                if (!characters.contains('A'))
                {
                    cout << 'A' << nl;
                }
                else if (!characters.contains('B'))
                {
                    cout << 'B' << nl;
                }
                else
                {
                    cout << 'C' << nl;
                }
            }
        }
    }
    return 0;
}
