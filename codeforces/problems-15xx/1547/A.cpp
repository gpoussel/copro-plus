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

// Codeforces - Codeforces Round 731 (Div. 3)
// A. Shortest Path with Obstacle

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int x_a;
        cin >> x_a;
        int y_a;
        cin >> y_a;
        int x_b;
        cin >> x_b;
        int y_b;
        cin >> y_b;
        int x_f;
        cin >> x_f;
        int y_f;
        cin >> y_f;

        long distance = abs(x_a - x_b) + abs(y_a - y_b);
        if (x_a == x_b && x_b == x_f)
        {
            // All points on a column
            if (y_a > y_b)
            {
                swap(y_a, y_b);
            }
            if (y_a < y_f && y_f < y_b)
            {
                distance += 2;
            }
        }
        else if (y_a == y_b && y_b == y_f)
        {
            // All points on a row
            if (x_a > x_b)
            {
                swap(x_a, x_b);
            }
            if (x_a < x_f && x_f < x_b)
            {
                distance += 2;
            }
        }
        cout << distance << nl;
    }
    return 0;
}
