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
// A. Gift Carpet

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        int m;
        cin >> m;
        set<int> v_positions;
        set<int> i_positions;
        set<int> k_positions;
        set<int> a_positions;
        for (int j = 0; j < n; j++)
        {
            string str;
            cin >> str;
            for (int l = 0; l < (int)str.size(); ++l)
            {
                if (str[l] == 'v')
                {
                    v_positions.insert(l);
                }
                else if (str[l] == 'i')
                {
                    i_positions.insert(l);
                }
                else if (str[l] == 'k')
                {
                    k_positions.insert(l);
                }
                else if (str[l] == 'a')
                {
                    a_positions.insert(l);
                }
            }
        }
        bool found = false;
        for (auto &v_position : v_positions)
        {
            for (auto &i_position : i_positions)
            {
                for (auto &k_position : k_positions)
                {
                    for (auto &a_position : a_positions)
                    {
                        if (v_position < i_position && i_position < k_position && k_position < a_position)
                        {
                            found = true;
                        }
                    }
                }
            }
        }
        cout << (found ? "YES" : "NO") << nl;
    }
    return 0;
}
