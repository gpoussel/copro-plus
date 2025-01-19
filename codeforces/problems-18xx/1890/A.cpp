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

// Codeforces - Codeforces Round 906 (Div. 2)
// A. Doremy's Paint 3

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        map<int, int> frequencies;
        for (int j = 0; j < length; j++)
        {
            int number;
            cin >> number;
            frequencies[number]++;
        }
        if (frequencies.size() > 2)
        {
            cout << "No" << nl;
        }
        else if (frequencies.size() == 1)
        {
            cout << "Yes" << nl;
        }
        else
        {
            auto it = frequencies.begin();
            int first_count = it->second;
            it++;
            int second_count = it->second;
            if (abs(first_count - second_count) <= 1)
            {
                cout << "Yes" << nl;
            }
            else
            {
                cout << "No" << nl;
            }
        }
    }
    return 0;
}
