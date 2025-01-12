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

// Codeforces - Codeforces Round 447 (Div. 2)
// A. QAQ

int main()
{
    string str;
    cin >> str;
    set<int> a_positions;
    vector<int> count_q_before(str.size() + 1, 0);
    for (int i = 0; i < (int)str.size(); ++i)
    {
        if (str[i] == 'A')
        {
            a_positions.insert(i);
        }
        count_q_before[i + 1] = count_q_before[i] + (str[i] == 'Q' ? 1 : 0);
    }
    long combinations = 0;
    for (auto &a_pos : a_positions)
    {
        int count_q_after = count_q_before[str.size()] - count_q_before[a_pos + 1];
        combinations += count_q_before[a_pos] * count_q_after;
    }
    cout << combinations << nl;
    return 0;
}
