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

// Codeforces - Codeforces Round 301 (Div. 2)
// A. Combination Lock

int main()
{
    int n;
    cin >> n;
    string start;
    cin >> start;
    string end;
    cin >> end;
    int total = 0;
    for (int i = 0; i < n; ++i)
    {
        char start_char = start[i];
        char end_char = end[i];
        int start_number = start_char - '0';
        int end_number = end_char - '0';
        int distance_1 = abs(start_number - end_number);
        int distance_2 = 10 - distance_1;
        total += min(distance_1, distance_2);
    }
    cout << total << nl;
    return 0;
}
