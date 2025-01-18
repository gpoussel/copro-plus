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

// Codeforces - Codeforces Round 946 (Div. 3)
// B. Symmetric Encoding

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        string b;
        cin >> b;
        set<char> unique_characters(b.begin(), b.end());
        vector<char> characters(unique_characters.begin(), unique_characters.end());
        sort(characters.begin(), characters.end());
        map<char, char> character_mapping;
        for (int j = 0; j < (int)characters.size(); j++)
        {
            character_mapping[characters[j]] = characters[characters.size() - j - 1];
        }
        string a;
        for (int j = 0; j < n; j++)
        {
            a.push_back(character_mapping[b[j]]);
        }
        cout << a << nl;
    }
    return 0;
}
