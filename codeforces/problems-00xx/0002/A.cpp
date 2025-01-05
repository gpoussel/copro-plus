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

// Codeforces - Codeforces Beta Round 2
// A. Winner

int main()
{
    int n;
    cin >> n;
    map<string, int> scores;
    vector<pair<int, string>> history;
    for (int i = 0; i < n; ++i)
    {
        string name;
        int score;
        cin >> name >> score;
        scores[name] += score;
        int player_score = scores[name];
        history.push_back({player_score, name});
    }
    int max_score = -1;
    for (auto &p : scores)
    {
        max_score = max(max_score, p.second);
    }
    for (auto &p : history)
    {
        if (p.first >= max_score && scores[p.second] == max_score)
        {
            cout << p.second << nl;
            break;
        }
    }
    return 0;
}
