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

// Codeforces - Codeforces Round 799 (Div. 4)
// B. All Distinct

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        map<int, int> occurrences;
        int odd_occurrences = 0;
        int even_occurrences = 0;
        for (int j = 0; j < length; j++)
        {
            int number;
            cin >> number;
            occurrences[number]++;
            if (occurrences[number] % 2 == 0)
            {
                odd_occurrences--;
                even_occurrences++;
            }
            else
            {
                odd_occurrences++;
                if (occurrences[number] > 1)
                {
                    even_occurrences--;
                }
            }
        }
        cout << odd_occurrences + even_occurrences - even_occurrences % 2 << nl;
    }
    return 0;
}
