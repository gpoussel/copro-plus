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

// Codeforces - Codeforces Round 851 (Div. 2)
// A. One and Two

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        vector<int> arr(length);
        int number_of_twos = 0;
        map<int, int> indexes_of_twos;
        for (int j = 0; j < length; j++)
        {
            cin >> arr[j];
            if (arr[j] == 2)
            {
                number_of_twos++;
                indexes_of_twos[number_of_twos] = j;
            }
        }
        if (number_of_twos % 2 == 0)
        {
            cout << indexes_of_twos[number_of_twos / 2] + 1 << nl;
        }
        else
        {
            cout << -1 << nl;
        }
    }
    return 0;
}
