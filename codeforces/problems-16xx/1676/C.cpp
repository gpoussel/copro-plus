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

// Codeforces - Codeforces Round 790 (Div. 4)
// C. Most Similar Words

int distance(const string &word1, const string &word2)
{
    int distance = 0;
    for (int i = 0; i < (int)word1.size(); ++i)
    {
        distance += abs(word1[i] - word2[i]);
    }
    return distance;
}

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
        vector<string> words(n);
        for (int j = 0; j < n; ++j)
        {
            cin >> words[j];
        }
        int min_distance = INT_MAX;
        for (int j = 0; j < n; ++j)
        {
            for (int k = j + 1; k < n; ++k)
            {
                min_distance = min(min_distance, distance(words[j], words[k]));
            }
        }
        cout << min_distance << nl;
    }
    return 0;
}
