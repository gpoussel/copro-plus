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

// Codeforces - Codeforces Round 715 (Div. 2)
// A. Average Height

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        vector<int> odd_numbers;
        vector<int> even_numbers;
        for (int j = 0; j < length; j++)
        {
            int number;
            cin >> number;
            if (number % 2 == 0)
            {
                even_numbers.push_back(number);
            }
            else
            {
                odd_numbers.push_back(number);
            }
        }
        for (int odd_number : odd_numbers)
        {
            cout << odd_number << " ";
        }
        for (int even_number : even_numbers)
        {
            cout << even_number << " ";
        }
        cout << nl;
    }
    return 0;
}
