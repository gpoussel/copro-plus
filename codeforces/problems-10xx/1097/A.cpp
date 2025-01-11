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

// Codeforces - Hello 2019
// A. Gennady and a Card Game

int main()
{
    string table_card;
    cin >> table_card;
    for (int i = 0; i < 5; ++i)
    {
        string card;
        cin >> card;
        if (card[0] == table_card[0] || card[1] == table_card[1])
        {
            cout << "YES" << nl;
            return 0;
        }
    }
    cout << "NO" << nl;
    return 0;
}
