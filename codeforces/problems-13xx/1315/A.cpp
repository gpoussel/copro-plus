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

// Codeforces - Codeforces Round 623 (Div. 2, based on VK Cup 2019-2020 - Elimination Round, Engine)
// A. Dead Pixel

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int width;
        cin >> width;
        int height;
        cin >> height;
        int x;
        cin >> x;
        int y;
        cin >> y;
        set<long> possible_areas;
        possible_areas.insert(x * height);
        possible_areas.insert((width - x - 1) * height);
        possible_areas.insert(y * width);
        possible_areas.insert((height - y - 1) * width);
        cout << *max_element(possible_areas.begin(), possible_areas.end()) << nl;
    }
    return 0;
}
