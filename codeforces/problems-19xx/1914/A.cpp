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

// Codeforces - Codeforces Round 916 (Div. 3)
// A. Problemsolving Log

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int duration_in_minutes;
        cin >> duration_in_minutes;
        string log;
        cin >> log;
        map<char, int> problems;
        for (int j = 0; j < duration_in_minutes; j++)
        {
            problems[log[j]]++;
        }
        int count = 0;
        for (auto &problem : problems)
        {
            if (problem.second >= problem.first - 'A' + 1)
            {
                ++count;
            }
        }
        cout << count << nl;
    }
    return 0;
}
