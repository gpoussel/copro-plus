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

// Codeforces - Codeforces Round 950 (Div. 3)
// A. Problem Generator

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
        string difficulties;
        cin >> difficulties;
        map<char, int> difficulty_counts;
        for (char difficulty : difficulties)
        {
            difficulty_counts[difficulty]++;
        }
        cout << max(0, m - difficulty_counts['A']) + max(0, m - difficulty_counts['B']) + max(0, m - difficulty_counts['C']) + max(0, m - difficulty_counts['D']) + max(0, m - difficulty_counts['E']) + max(0, m - difficulty_counts['F']) + max(0, m - difficulty_counts['G']) << nl;
    }
    return 0;
}
