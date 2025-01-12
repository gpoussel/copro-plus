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

// Codeforces - Codeforces Round 799 (Div. 4)
// C. Where's the Bishop?

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        pair<int, int> bishop_position;
        for (int j = 0; j < 8; ++j)
        {
            string line;
            cin >> line;
            vector<int> positions_of_hashes;
            for (int k = 0; k < 8; ++k)
            {
                if (line[k] == '#')
                {
                    positions_of_hashes.push_back(k);
                }
            }
            if (positions_of_hashes.size() == 2 && bishop_position.first == 0 && bishop_position.second == 0)
            {
                bishop_position.second = 1 + (positions_of_hashes[0] + positions_of_hashes[1]) / 2;
                bishop_position.first = j + 1 + (positions_of_hashes[1] - positions_of_hashes[0]) / 2;
            }
        }
        cout << bishop_position.first << " " << bishop_position.second << nl;
    }
    return 0;
}
