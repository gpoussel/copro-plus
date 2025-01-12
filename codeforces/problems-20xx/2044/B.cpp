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

// Codeforces - Codeforces Round 993 (Div. 4)
// B. Normal Problem

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        string str;
        cin >> str;
        vector<char> letters(str.size());
        for (int j = 0; j < (int)str.size(); ++j)
        {
            int target_position = (int)str.size() - j - 1;
            if (str[j] == 'p')
            {
                letters[target_position] = 'q';
            }
            else if (str[j] == 'q')
            {
                letters[target_position] = 'p';
            }
            else
            {
                letters[target_position] = str[j];
            }
        }
        cout << string(letters.begin(), letters.end()) << nl;
    }
    return 0;
}
