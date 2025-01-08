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

// Codeforces - Codeforces Round 377 (Div. 2)
// A. Buy a Shovel

int main()
{
    int price;
    cin >> price;
    int coin;
    cin >> coin;
    int count = 1;
    while ((price * count) % 10 != 0 && (price * count) % 10 != coin)
        count++;
    cout << count << nl;
    return 0;
}
