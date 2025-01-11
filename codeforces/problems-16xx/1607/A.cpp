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

// Codeforces - Codeforces Round 753 (Div. 3)
// A. Linear Keyboard

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        string keyboard;
        cin >> keyboard;
        string word;
        cin >> word;
        int position = (int)keyboard.find(word[0]);
        int steps = 0;
        for (int j = 1; j < (int)word.size(); ++j)
        {
            int new_position = (int)keyboard.find(word[j]);
            steps += abs(new_position - position);
            position = new_position;
        }
        cout << steps << nl;
    }
    return 0;
}
