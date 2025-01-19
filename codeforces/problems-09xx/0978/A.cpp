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

// Codeforces - Codeforces Round 481 (Div. 3)
// A. Remove Duplicates

int main()
{
    int length;
    cin >> length;
    vector<int> arr(length);
    for (int j = 0; j < length; j++)
    {
        cin >> arr[j];
    }
    map<int, int> last_position;
    for (int j = 0; j < length; ++j)
    {
        last_position[arr[j]] = j;
    }
    cout << last_position.size() << nl;
    for (int j = 0; j < length; ++j)
    {
        if (last_position[arr[j]] == j)
        {
            cout << arr[j] << " ";
        }
    }
    cout << nl;
    return 0;
}
