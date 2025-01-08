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

// Codeforces - Codeforces Round 739 (Div. 3)
// A. Dislike of Threes

int main()
{
    vector<int> array;
    for (int i = 1; array.size() < 1000; i++)
    {
        if (i % 3 != 0 && i % 10 != 3)
        {
            array.push_back(i);
        }
    }
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int k;
        cin >> k;
        cout << array[k - 1] << nl;
    }
    return 0;
}
