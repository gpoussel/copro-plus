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

// Codeforces - VK Cup 2012 Qualification Round 1
// A. Next Round

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> scores(n);
    for (int i = 0; i < n; i++)
    {
        int score;
        cin >> score;
        scores[i] = score;
    }

    if (scores[0] == 0)
    {
        cout << 0 << nl;
        return 0;
    }
    int score_of_kth = scores[k - 1];

    int index = 0;
    while (scores[index] >= score_of_kth && scores[index] > 0 && index < n)
        index++;
    cout << index << nl;
    return 0;
}
