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

// Codeforces - Codeforces Round 835 (Div. 4)
// C. Advantage

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        vector<long long> arr(length);
        long long before_max_value = 0;
        long long max_value = 0;
        int number_of_max_values = 0;
        for (int j = 0; j < length; j++)
        {
            cin >> arr[j];
            if (arr[j] > max_value)
            {
                before_max_value = max(before_max_value, max_value);
                max_value = arr[j];
                number_of_max_values = 1;
            }
            else if (arr[j] == max_value)
            {
                number_of_max_values++;
            }
            else if (arr[j] > before_max_value)
            {
                before_max_value = arr[j];
            }
        }

        for (int j = 0; j < length; ++j)
        {
            if (j > 0)
            {
                cout << ' ';
            }
            if (arr[j] == max_value && number_of_max_values == 1)
            {
                cout << arr[j] - before_max_value;
            }
            else
            {
                cout << arr[j] - max_value;
            }
        }
        cout << nl;
    }
    return 0;
}
