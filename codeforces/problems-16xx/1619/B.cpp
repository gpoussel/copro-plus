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

// Codeforces - Codeforces Round 762 (Div. 3)
// B. Squares and Cubes

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        long long number;
        cin >> number;
        int number_of_squares = (int)sqrt(number);
        int number_of_cubes = (int)cbrt(number);
        int number_of_squares_and_cubes = (int)cbrt(sqrt(number));
        cout << number_of_squares + number_of_cubes - number_of_squares_and_cubes << nl;
    }
    return 0;
}
