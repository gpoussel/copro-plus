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

// Codeforces - Codeforces Round 928 (Div. 4)
// B. Vlad and Shapes

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        set<int> numbers_of_ones;
        for (int j = 0; j < n; ++j)
        {
            string line;
            cin >> line;
            numbers_of_ones.insert((int)count(line.begin(), line.end(), '1'));
        }
        numbers_of_ones.erase(0);
        if (numbers_of_ones.size() == 1)
        {
            cout << "SQUARE" << nl;
        }
        else
        {
            cout << "TRIANGLE" << nl;
        }
    }
    return 0;
}
