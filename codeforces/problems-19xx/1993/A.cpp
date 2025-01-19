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

// Codeforces - Codeforces Round 963 (Div. 2)
// A. Question Marks

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        string answers;
        cin >> answers;
        map<char, int> character_counters;
        for (int j = 0; j < (int)answers.size(); j++)
        {
            character_counters[answers[j]]++;
        }
        int score = 0;
        for (auto &character : {'A', 'B', 'C', 'D'})
        {
            score += min(character_counters[character], n);
        }
        cout << score << nl;
    }
    return 0;
}
