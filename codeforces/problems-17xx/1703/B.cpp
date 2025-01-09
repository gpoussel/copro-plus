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

// Codeforces - Codeforces Round 806 (Div. 4)
// B. ICPC Balloons

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        string solved_problems;
        cin >> solved_problems;
        set<char> unique_problems;
        int number_of_balloons = 0;
        for (char c : solved_problems)
        {
            if (!unique_problems.contains(c))
            {
                unique_problems.insert(c);
                number_of_balloons++;
            }
            number_of_balloons++;
        }
        cout << number_of_balloons << nl;
    }
    return 0;
}
