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

// Codeforces - Codeforces Round  828 (Div. 3)
// A. Number Replacement

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        vector<int> arr(length);
        for (int j = 0; j < length; j++)
        {
            cin >> arr[j];
        }
        string str;
        cin >> str;
        map<int, char> dictionary;
        bool possible = true;
        for (int j = 0; j < (int)str.size(); ++j)
        {
            if (dictionary.contains(arr[j]))
            {
                char set_char = dictionary[arr[j]];
                if (set_char != str[j])
                {
                    possible = false;
                    break;
                }
            }
            else
            {
                dictionary[arr[j]] = str[j];
            }
        }
        cout << (possible ? "YES" : "NO") << nl;
    }
    return 0;
}
