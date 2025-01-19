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

// Codeforces - Codeforces Round 686 (Div. 3)
// B. Unique Bid Auction

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        set<int> unique_numbers;
        set<int> non_unique_numbers;
        map<int, int> indexes;
        for (int j = 0; j < length; j++)
        {
            int n;
            cin >> n;
            if (non_unique_numbers.contains(n))
            {
                continue;
            }
            if (unique_numbers.contains(n))
            {
                unique_numbers.erase(n);
                non_unique_numbers.insert(n);
            }
            else
            {
                unique_numbers.insert(n);
                indexes[n] = j + 1;
            }
        }
        if (unique_numbers.empty())
        {
            cout << -1 << nl;
        }
        else
        {
            int min_number = *min_element(unique_numbers.begin(), unique_numbers.end());
            cout << indexes[min_number] << nl;
        }
    }
    return 0;
}
