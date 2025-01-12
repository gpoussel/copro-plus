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

// Codeforces - Codeforces Round 776 (Div. 3)
// A. Deletions of Two Adjacent Letters

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        string str;
        cin >> str;
        char letter;
        cin >> letter;
        set<int> positions_of_letter;
        for (int j = 0; j < (int)str.size(); ++j)
        {
            if (str[j] == letter)
            {
                positions_of_letter.insert(j);
            }
        }
        bool can_obtain_letter = false;
        for (auto &position : positions_of_letter)
        {
            if ((position % 2 == 0) && ((str.size() - position - 1) % 2 == 0))
            {
                can_obtain_letter = true;
                break;
            }
        }
        cout << (can_obtain_letter ? "YES" : "NO") << nl;
    }
    return 0;
}
