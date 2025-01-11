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

// Codeforces - Codeforces Round 806 (Div. 4)
// C. Cypher

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        vector<int> digits(length);
        for (int j = 0; j < length; j++)
        {
            cin >> digits[j];
        }
        for (int j = 0; j < length; j++)
        {
            int number_of_moves;
            cin >> number_of_moves;
            string moves;
            cin >> moves;
            for (int k = 0; k < (int)moves.size(); ++k)
            {
                if (moves[k] == 'D')
                {
                    digits[j] = (digits[j] + 1) % 10;
                }
                else
                {
                    digits[j] = (digits[j] + 9) % 10;
                }
            }
            if (j > 0)
            {
                cout << ' ';
            }
            cout << digits[j];
        }
        cout << nl;
    }
    return 0;
}
