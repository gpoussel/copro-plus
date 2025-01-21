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

// Codeforces - Codeforces Round 731 (Div. 3)
// B. Alphabetical Strings

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        string str;
        cin >> str;
        int length = (int)str.length();
        int left = 0;
        int right = length - 1;
        char current_char = (char)('a' + length - 1);
        bool valid = true;
        while (current_char >= 'a')
        {
            if (str[left] == current_char)
            {
                left++;
            }
            else if (str[right] == current_char)
            {
                right--;
            }
            else
            {
                valid = false;
                break;
            }
            current_char--;
        }
        cout << (valid ? "YES" : "NO") << nl;
    }
    return 0;
}
