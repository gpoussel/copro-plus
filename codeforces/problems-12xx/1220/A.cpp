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

// Codeforces - Codeforces Round 586 (Div. 1 + Div. 2)
// A. Cards

int main()
{
    int n;
    cin >> n;
    int number_of_zeros = 0;
    int number_of_ones = 0;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        if (c == 'z')
        {
            number_of_zeros++;
        }
        else if (c == 'n')
        {
            number_of_ones++;
        }
    }
    for (int i = 0; i < number_of_ones; i++)
    {
        cout << "1 ";
    }
    for (int i = 0; i < number_of_zeros; i++)
    {
        cout << "0 ";
    }
    cout << nl;
    return 0;
}
