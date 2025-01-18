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

// Codeforces - Codeforces Round 820 (Div. 3)
// B. Decode String

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
        string result;
        for (int j = n - 1; j >= 0; --j)
        {
            if (str[j] == '0')
            {
                int number = stoi(str.substr(j - 2, 2));
                result = (char)('a' + number - 1) + result;
                j -= 2;
            }
            else
            {
                result = (char)('a' + str[j] - '0' - 1) + result;
            }
        }
        cout << result << nl;
    }
    return 0;
}
