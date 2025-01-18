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

// Codeforces - Codeforces Round 888 (Div. 3)
// B. Parity Sort

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
        vector<int> parities(length);
        vector<int> sorted_numbers(length);
        for (int j = 0; j < length; j++)
        {
            int n;
            cin >> n;
            parities[j] = n % 2;
            if (parities[j] == 0)
            {
                even_numbers.push_back(n);
            }
            else
            {
                odd_numbers.push_back(n);
            }
        }
        if (length == 1)
        {
            cout << "YES" << nl;
            continue;
        }
        sort(even_numbers.begin(), even_numbers.end());
        sort(odd_numbers.begin(), odd_numbers.end());
        bool sortable = true;
        int idx_even = 0;
        int idx_odd = 0;
        for (int j = 0; sortable && j < length; ++j)
        {
            if (parities[j] == 0)
            {
                sorted_numbers[j] = even_numbers[idx_even++];
            }
            else
            {
                sorted_numbers[j] = odd_numbers[idx_odd++];
            }
            if (j > 0 && sorted_numbers[j] < sorted_numbers[j - 1])
            {
                sortable = false;
            }
        }
        cout << (sortable ? "YES" : "NO") << nl;
    }
    return 0;
}