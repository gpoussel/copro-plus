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

// Codeforces - Codeforces Round 486 (Div. 3)
// A. Diverse Team

int main()
{
    int n;
    cin >> n;
    size_t k;
    cin >> k;
    map<int, int> elements;
    for (int j = 0; j < n; j++)
    {
        int value;
        cin >> value;
        elements[value] = j + 1;
    }
    if (elements.size() < k)
    {
        cout << "NO" << nl;
    }
    else
    {
        cout << "YES" << nl;
        size_t i = 0;
        for (auto &element : elements)
        {
            cout << element.second << " ";
            i++;
            if (i == k)
            {
                break;
            }
        }
        cout << nl;
    }
    return 0;
}
