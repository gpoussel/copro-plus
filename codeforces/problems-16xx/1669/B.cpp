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

// Codeforces - Codeforces Round 784 (Div. 4)
// B. Triple

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        map<int, int> occurrences;
        bool found = false;
        for (int j = 0; j < n; ++j)
        {
            int number;
            cin >> number;
            occurrences[number]++;
            if (occurrences[number] == 3 && !found)
            {
                cout << number << nl;
                found = true;
            }
        }
        if (!found)
        {
            cout << -1 << nl;
        }
    }
    return 0;
}
