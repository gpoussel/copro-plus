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

// Codeforces - Codeforces Round 849 (Div. 4)
// B. Following Directions

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        pair<int, int> current_position = {0, 0};
        bool found_candy = false;
        for (int i = 0; i < n; ++i)
        {
            switch (str[i])
            {
            case 'U':
                current_position.second++;
                break;
            case 'D':
                current_position.second--;
                break;
            case 'L':
                current_position.first--;
                break;
            case 'R':
                current_position.first++;
                break;
            }
            if (current_position.first == 1 && current_position.second == 1)
            {
                found_candy = true;
                break;
            }
        }
        cout << (found_candy ? "YES" : "NO") << nl;
    }
    return 0;
}
