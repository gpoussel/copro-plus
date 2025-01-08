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

// Codeforces - Codeforces Round 107 (Div. 2)
// A. Soft Drinking

int main()
{
    int friends, nb_bottles, volume_bottle, nb_limes, slices_per_lime, salt, ml_required, salt_required;
    cin >> friends >> nb_bottles >> volume_bottle >> nb_limes >> slices_per_lime >> salt >> ml_required >> salt_required;

    vector<int> quantities_per_ingredient;
    quantities_per_ingredient.push_back((nb_bottles * volume_bottle) / ml_required);
    quantities_per_ingredient.push_back(nb_limes * slices_per_lime);
    quantities_per_ingredient.push_back(salt / salt_required);
    sort(quantities_per_ingredient.begin(), quantities_per_ingredient.end());
    cout << quantities_per_ingredient[0] / friends << nl;
    return 0;
}
