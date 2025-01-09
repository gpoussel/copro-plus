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

// Codeforces - Codeforces Round 650 (Div. 3)
// B. Even Array

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        int number_of_odd = 0;
        int number_of_even = 0;
        int number_of_incorrect_odd = 0;
        int number_of_incorrect_even = 0;
        for (int j = 0; j < length; j++)
        {
            int nb;
            cin >> nb;
            if (nb % 2 == 0)
            {
                number_of_even++;
                if (j % 2 != 0)
                {
                    number_of_incorrect_odd++;
                }
            }
            else
            {
                number_of_odd++;
                if (j % 2 == 0)
                {
                    number_of_incorrect_even++;
                }
            }
        }
        if (number_of_incorrect_odd != number_of_incorrect_even)
        {
            cout << -1 << nl;
        }
        else
        {
            cout << number_of_incorrect_odd << nl;
        }
    }
    return 0;
}
