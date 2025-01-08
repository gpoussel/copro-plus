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

// Codeforces - Codeforces Round 279 (Div. 2)
// A. Team Olympiad

int main()
{
    int length;
    cin >> length;
    vector<int> arr(length);
    for (int j = 0; j < length; j++)
    {
        cin >> arr[j];
    }
    vector<int> indexes_of_ones;
    vector<int> indexes_of_twos;
    vector<int> indexes_of_threes;
    for (int j = 0; j < length; j++)
    {
        if (arr[j] == 1)
        {
            indexes_of_ones.push_back(j);
        }
        else if (arr[j] == 2)
        {
            indexes_of_twos.push_back(j);
        }
        else
        {
            indexes_of_threes.push_back(j);
        }
    }
    int max_number_of_teams = (int)min(min(indexes_of_ones.size(), indexes_of_twos.size()), indexes_of_threes.size());
    cout << max_number_of_teams << nl;
    for (int j = 0; j < max_number_of_teams; j++)
    {
        cout << indexes_of_ones[j] + 1 << " " << indexes_of_twos[j] + 1 << " " << indexes_of_threes[j] + 1 << nl;
    }
    return 0;
}
