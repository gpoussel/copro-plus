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

// Codeforces - Codeforces Beta Round 25 (Div. 2 Only)
// A. IQ test

int main()
{
    int n;
    cin >> n;
    int odd_count = 0;
    int even_count = 0;
    pair<int, int> last_numbers;
    for (int i = 0; i < n; i++)
    {
        int number;
        cin >> number;
        if (number % 2 == 0)
        {
            even_count++;
            last_numbers.first = i + 1;
        }
        else
        {
            odd_count++;
            last_numbers.second = i + 1;
        }
    }
    if (even_count == 1)
    {
        cout << last_numbers.first << nl;
    }
    else
    {
        cout << last_numbers.second << nl;
    }
    return 0;
}
