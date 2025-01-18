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

// Codeforces - Codeforces Round 811 (Div. 3)
// B. Remove Prefix

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        vector<int> arr(length);
        map<int, int> frequencies;
        for (int j = 0; j < length; j++)
        {
            cin >> arr[j];
            frequencies[arr[j]]++;
        }
        for (auto it = frequencies.begin(); it != frequencies.end();)
        {
            if (it->second == 1)
            {
                it = frequencies.erase(it);
            }
            else
            {
                ++it;
            }
        }
        int offset = 0;
        while (!frequencies.empty())
        {
            int next_element = arr[offset];
            if (frequencies.contains(next_element))
            {
                frequencies[next_element]--;
                if (frequencies[next_element] == 1)
                {
                    frequencies.erase(next_element);
                }
            }
            ++offset;
        }
        cout << offset << nl;
    }
    return 0;
}
