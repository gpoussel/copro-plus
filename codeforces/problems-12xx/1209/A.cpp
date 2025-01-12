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

// Codeforces - Codeforces Round 584 - Dasha Code Championship - Elimination Round (rated, open for everyone, Div. 1 + Div. 2)
// A. Paint the Numbers

int main()
{
    int length;
    cin >> length;
    vector<int> arr(length);
    for (int j = 0; j < length; j++)
    {
        cin >> arr[j];
    }
    sort(arr.begin(), arr.end());
    int color_count = 0;
    int position = 0;
    while (position < length)
    {
        color_count++;
        int first_element_of_color = arr[position];
        for (int i = position + 1; i < length; i++)
        {
            if (arr[i] > 0 && arr[i] % first_element_of_color == 0)
            {
                arr[i] = 0;
            }
        }
        position++;
        while (arr[position] == 0 && position < length)
            position++;
    }
    cout << color_count << nl;
    return 0;
}
