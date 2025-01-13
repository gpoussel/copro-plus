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

// Codeforces - Codeforces Round 542 [Alex Lopashev Thanks-Round] (Div. 2)
// A. Be Positive

int main()
{
    int length;
    cin >> length;
    vector<int> arr(length);
    int positive_count = 0;
    int negative_count = 0;
    for (int j = 0; j < length; j++)
    {
        cin >> arr[j];
        if (arr[j] > 0)
        {
            positive_count++;
        }
        else if (arr[j] < 0)
        {
            negative_count++;
        }
    }
    int half = (int)ceil(length / 2.0);
    if (positive_count >= half)
    {
        cout << 1 << nl;
    }
    else if (negative_count >= half)
    {
        cout << -1 << nl;
    }
    else
    {
        cout << 0 << nl;
    }
    return 0;
}
