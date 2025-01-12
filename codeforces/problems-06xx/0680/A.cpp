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

// Codeforces - Codeforces Round 356 (Div. 2)
// A. Bear and Five Cards

int main()
{
    vector<int> arr(5);
    int sum = 0;
    for (int j = 0; j < 5; j++)
    {
        cin >> arr[j];
        sum += arr[j];
    }
    sort(arr.begin(), arr.end(), greater<int>());
    set<int> possible_sums;
    possible_sums.insert(sum);
    for (int i = 0; i < 4; ++i)
    {
        if (arr[i] == arr[i + 1])
        {
            if (i < 3 && arr[i] == arr[i + 2])
            {
                possible_sums.insert(sum - 3 * arr[i]);
            }
            else
            {
                possible_sums.insert(sum - 2 * arr[i]);
            }
        }
    }
    cout << *min_element(possible_sums.begin(), possible_sums.end()) << nl;
    return 0;
}
