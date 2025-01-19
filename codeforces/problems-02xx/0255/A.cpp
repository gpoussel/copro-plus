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

// Codeforces - Codeforces Round 156 (Div. 2)
// A. Greg's Workout

int main()
{
    int n;
    cin >> n;
    long chest = 0;
    long biceps = 0;
    long back = 0;
    for (int i = 0; i < n; i++)
    {
        int number_of_exercices;
        cin >> number_of_exercices;
        if (i % 3 == 0)
        {
            chest += number_of_exercices;
        }
        else if (i % 3 == 1)
        {
            biceps += number_of_exercices;
        }
        else
        {
            back += number_of_exercices;
        }
    }
    if (chest > biceps && chest > back)
    {
        cout << "chest" << nl;
    }
    else if (biceps > chest && biceps > back)
    {
        cout << "biceps" << nl;
    }
    else
    {
        cout << "back" << nl;
    }
    return 0;
}
