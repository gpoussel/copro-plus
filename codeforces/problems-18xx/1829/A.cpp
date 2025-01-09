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

// Codeforces - Codeforces Round 871 (Div. 4)
// A. Love Story

const string target_string = "codeforces";

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        string str;
        cin >> str;
        int count_differnt = 0;
        for (int j = 0; j < (int)str.size(); ++j)
        {
            if (str[j] != target_string[j])
            {
                count_differnt++;
            }
        }
        cout << count_differnt << nl;
    }
    return 0;
}
