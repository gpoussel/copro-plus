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

// Codeforces - Codeforces Round 845 (Div. 2) and ByteRace 2023
// A. Everybody Likes Good Arrays!

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        int number_of_operations = 0;
        long long previous_number = 0;
        deb(i);
        for (int j = 0; j < length; j++)
        {
            long long number;
            cin >> number;
            number %= 2;
            if (j > 0 && number == previous_number)
            {
                deb(number);
                deb(previous_number);
                number_of_operations++;
                previous_number = number;
            }
            previous_number = number;
        }
        cout << number_of_operations << nl;
    }
    return 0;
}
