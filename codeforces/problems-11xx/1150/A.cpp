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

// Codeforces - Codeforces Round 556 (Div. 2)
// A. Stock Arbitraging

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int r;
    cin >> r;
    vector<int> a(n);
    for (int j = 0; j < n; j++)
    {
        cin >> a[j];
    }
    vector<int> b(m);
    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }
    auto min_buy_price = *min_element(a.begin(), a.end());
    auto max_sell_price = *max_element(b.begin(), b.end());
    if (max_sell_price <= min_buy_price)
    {
        cout << r << nl;
    }
    else
    {
        int num_stocks = r / min_buy_price;
        int remaining_money = r % min_buy_price;
        int total_money = num_stocks * max_sell_price + remaining_money;
        cout << total_money << nl;
    }
    return 0;
}
