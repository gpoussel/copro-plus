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

// Codeforces - Codeforces Round 719 (Div. 3)
// A. Do Not Be Distracted!

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
        char current_char = str[0];
        set<char> processed_characters;
        bool suspicious = false;
        for (int i = 1; i < n; i++)
        {
            if (str[i] != current_char)
            {
                processed_characters.insert(current_char);
                if (processed_characters.contains(str[i]))
                {
                    suspicious = true;
                    break;
                }
                current_char = str[i];
            }
        }
        cout << (suspicious ? "NO" : "YES") << nl;
    }
    return 0;
}
