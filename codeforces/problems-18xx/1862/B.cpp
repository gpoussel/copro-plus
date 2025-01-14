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

// Codeforces - Codeforces Round 894 (Div. 3)
// B. Sequence Game

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        vector<long long> arr(length);
        bool sorted = true;
        for (int j = 0; j < length; j++)
        {
            cin >> arr[j];
            if (j > 0 && arr[j] < arr[j - 1])
            {
                sorted = false;
            }
        }
        if (sorted)
        {
            cout << length << nl;
            for (int j = 0; j < length; ++j)
            {
                cout << (j > 0 ? " " : "") << arr[j];
            }
            cout << nl;
        }
        else
        {
            vector<long long> new_array;
            new_array.push_back(arr[0]);
            for (int j = 1; j < length; j++)
            {
                if (arr[j] < arr[j - 1])
                {
                    new_array.push_back(arr[j]);
                    new_array.push_back(arr[j]);
                }
                else
                {
                    new_array.push_back(arr[j]);
                }
            }
            cout << new_array.size() << nl;
            for (int j = 0; j < (int)new_array.size(); ++j)
            {
                cout << (j > 0 ? " " : "") << new_array[j];
            }
            cout << nl;
        }
    }
    return 0;
}
