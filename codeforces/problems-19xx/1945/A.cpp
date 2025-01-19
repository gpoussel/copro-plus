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

// Codeforces - Codeforces Round 935 (Div. 3)
// A. Setting up Camp

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        long long introverts;
        cin >> introverts;
        long long extroverts;
        cin >> extroverts;
        long long universals;
        cin >> universals;

        long long tent_total_count = 0;
        tent_total_count += extroverts / 3;
        long long extroverts_reminder = extroverts % 3;
        if (extroverts_reminder > 0)
        {
            if (extroverts_reminder + universals >= 3)
            {
                tent_total_count++;
                universals -= 3 - extroverts_reminder;
            }
            else
            {
                cout << -1 << nl;
                continue;
            }
        }
        tent_total_count += universals / 3;
        if (universals % 3 > 0)
        {
            tent_total_count++;
        }
        tent_total_count += introverts;
        cout << tent_total_count << nl;
    }
    return 0;
}
