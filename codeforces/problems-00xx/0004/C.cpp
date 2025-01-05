#include <algorithm>
#include <array>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <map>
#include <numbers>
#include <set>
#include <string>
#include <vector>
using namespace std;

#define nl '\n'
#define deb(x) cerr << #x " = " << x << nl
#define EPSILON 1e-9
#define equals(a, b) (fabs(a - b) < EPSILON)
#define almost_equals(a, b) (fabs(a - b) < 1e-4)

// Codeforces - Codeforces Beta Round 4 (Div. 2 Only)
// C. Registration system

int main()
{
    int n;
    cin >> n;
    set<string> names;
    map<string, int> name_count;
    for (int i = 0; i < n; ++i)
    {
        string name;
        cin >> name;

        if (!names.contains(name))
        {
            names.insert(name);
            cout << "OK" << nl;
        }
        else
        {
            int number = name_count[name] + 1;
            names.insert(name + to_string(number));
            name_count[name]++;
            cout << name + to_string(number) << nl;
        }
    }
    return 0;
}
