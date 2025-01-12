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

// Codeforces - Codeforces Round 878 (Div. 3)
// A. Cipher Shifer

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        string str;
        cin >> str;
        string word;
        int position = 0;
        int next_position = 1;
        while (position < (int)str.size())
        {
            while (str[next_position] != str[position])
            {
                next_position++;
            }
            word += str[position];
            position = next_position + 1;
            next_position += 2;
        }
        cout << word << nl;
    }
    return 0;
}
