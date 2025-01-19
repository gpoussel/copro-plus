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

// Codeforces - Codeforces Round 803 (Div. 2)
// A. XOR Mixup

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        vector<int> arr(length);
        for (int j = 0; j < length; j++)
        {
            cin >> arr[j];
        }
        for (int j = 0; j < length; ++j)
        {
            int xor_of_all_other_elements = 0;
            for (int k = 0; k < length; ++k)
            {
                if (k != j)
                {
                    xor_of_all_other_elements ^= arr[k];
                }
            }
            if (xor_of_all_other_elements == arr[j])
            {
                cout << arr[j] << nl;
                break;
            }
        }
    }
    return 0;
}
