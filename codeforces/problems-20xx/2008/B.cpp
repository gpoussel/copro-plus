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

// Codeforces - Codeforces Round 970 (Div. 3)
// B. Square or Not

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        string extract_of_matrix;
        cin >> extract_of_matrix;
        int size = (int)sqrt(n);
        if (size * size != n)
        {
            cout << "No" << nl;
            continue;
        }
        bool possible = true;
        for (int j = 0; possible && j < size; j++)
        {
            for (int k = 0; possible && k < size; k++)
            {
                bool one_expected = j == 0 || j == size - 1 || k == 0 || k == size - 1;
                if ((extract_of_matrix[j * size + k] == '1') != one_expected)
                {
                    possible = false;
                }
            }
        }
        cout << (possible ? "Yes" : "No") << nl;
    }
    return 0;
}
