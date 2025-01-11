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

// Codeforces - Codeforces Round 748 (Div. 3)
// A. Elections

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        vector<long long> votes(3);
        for (int j = 0; j < 3; ++j)
        {
            cin >> votes[j];
        }
        long long max_votes = *max_element(votes.begin(), votes.end());
        int count_max_votes = (int)count(votes.begin(), votes.end(), max_votes);
        for (int j = 0; j < 3; ++j)
        {
            if (j > 0)
            {
                cout << ' ';
            }
            if (votes[j] == max_votes)
            {
                cout << (count_max_votes > 1 ? 1 : 0);
            }
            else
            {
                cout << max_votes - votes[j] + 1;
            }
        }
        cout << nl;
    }
    return 0;
}
