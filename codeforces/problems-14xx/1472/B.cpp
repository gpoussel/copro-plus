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

// Codeforces - Codeforces Round 693 (Div. 3)
// B. Fair Division

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        int sum = 0;
        int number_of_ones = 0;
        int number_of_twos = 0;
        for (int j = 0; j < length; j++)
        {
            int weight;
            cin >> weight;
            sum += weight;
            if (weight == 1)
            {
                number_of_ones++;
            }
            else
            {
                number_of_twos++;
            }
        }
        if (number_of_ones % 2 == 0 && number_of_twos % 2 == 0)
        {
            cout << "YES" << nl;
        }
        else if (number_of_twos % 2 == 1)
        {
            cout << (number_of_ones % 2 == 0 && number_of_ones > 0 ? "YES" : "NO") << nl;
        }
        else
        {
            cout << (number_of_ones % 2 == 0 ? "YES" : "NO") << nl;
        }
    }
    return 0;
}
