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

// Codeforces - Codeforces Round 734 (Div. 3)
// B1. Wonderful Coloring - 1

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        string str;
        cin >> str;
        map<char, int> freq;
        for (char c : str)
        {
            freq[c]++;
        }
        int count_one_occurrence = 0;
        int count_more_than_one_occurrence = 0;
        for (auto &p : freq)
        {
            if (p.second == 1)
            {
                count_one_occurrence++;
            }
            else
            {
                count_more_than_one_occurrence++;
            }
        }
        cout << count_more_than_one_occurrence + count_one_occurrence / 2 << nl;
    }
    return 0;
}
