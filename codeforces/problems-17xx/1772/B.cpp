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

// Codeforces - Codeforces Round 839 (Div. 3)
// B. Matrix Rotation

bool is_beautiful(int matrix[2][2])
{
    return matrix[0][0] < matrix[0][1] && matrix[1][0] < matrix[1][1] && matrix[0][0] < matrix[1][0] && matrix[0][1] < matrix[1][1];
}

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int matrix[2][2];
        cin >> matrix[0][0] >> matrix[0][1] >> matrix[1][0] >> matrix[1][1];
        bool found_beautiful = false;
        for (int j = 0; j < 4; ++j)
        {
            if (is_beautiful(matrix))
            {
                found_beautiful = true;
                break;
            }
            int temp = matrix[0][0];
            matrix[0][0] = matrix[1][0];
            matrix[1][0] = matrix[1][1];
            matrix[1][1] = matrix[0][1];
            matrix[0][1] = temp;
        }
        cout << (found_beautiful ? "YES" : "NO") << nl;
    }
    return 0;
}
