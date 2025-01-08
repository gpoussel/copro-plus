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

// Codeforces - Codeforces Round 103 (Div. 2)
// A. Arrival of the General

int main()
{
    int n;
    cin >> n;
    vector<int> array;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        array.push_back(x);
    }
    int index_of_max = (int)(max_element(array.begin(), array.end()) - array.begin());
    for (int i = index_of_max; i < n - 1; i++)
    {
        swap(array[i], array[i + 1]);
    }
    reverse(array.begin(), array.end());
    int index_of_min = (int)(min_element(array.begin(), array.end()) - array.begin());
    cout << max(0, index_of_max + index_of_min - 1) << nl;
    return 0;
}
