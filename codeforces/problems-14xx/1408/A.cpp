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

// Codeforces - Grakn Forces 2020
// A. Circle Coloring

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        vector<int> a(length);
        for (int j = 0; j < length; j++)
        {
            cin >> a[j];
        }
        vector<int> b(length);
        for (int j = 0; j < length; j++)
        {
            cin >> b[j];
        }
        vector<int> c(length);
        for (int j = 0; j < length; j++)
        {
            cin >> c[j];
        }
        vector<int> result(length);
        result[0] = a[0];
        cout << result[0];
        for (int j = 1; j < length; j++)
        {
            set<int> possible_values = {a[j], b[j], c[j]};
            possible_values.erase(result[j - 1]);
            if (j == length - 1)
            {
                possible_values.erase(result[0]);
            }
            result[j] = *possible_values.begin();
            cout << ' ' << result[j];
        }
        cout << nl;
    }
    return 0;
}
