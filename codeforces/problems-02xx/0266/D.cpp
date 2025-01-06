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

// Codeforces - Codeforces Round 163 (Div. 2)
// D. BerDonalds
#define MAX_N 200
#define INF 1e9

int main()
{
    vector<vector<int>> dist(MAX_N, vector<int>(MAX_N, 0));
    int nodes1[MAX_N * MAX_N];
    int nodes2[MAX_N * MAX_N];
    vector<int> weights(MAX_N * MAX_N, 0);
    vector<pair<int, int>> d(MAX_N);
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            dist[i][j] = i == j ? 0 : INF;
        }
    }

    for (int i = 0; i < m; ++i)
    {
        int a, b, w;
        cin >> a >> b >> w;
        dist[a - 1][b - 1] = w;
        dist[b - 1][a - 1] = w;
        weights[i] = w;
        nodes1[i] = a - 1;
        nodes2[i] = b - 1;
    }

    for (int k = 0; k < n; ++k)
    {
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    double answer = INF;
    for (int i = 0; i < m; ++i)
    {
        int weight = weights[i];
        for (int j = 0; j < n; j++)
        {
            d[j].first = dist[nodes1[i]][j];
            d[j].second = dist[nodes2[i]][j];
        }
        sort(d.begin(), next(d.begin(), n), [](pair<int, int> p1, pair<int, int> p2)
             { return p1.first > p2.first; });
        int M = d[0].second;
        answer = min(answer, 1.0 * d[0].first);
        for (int j = 1; j < n; j++)
        {
            double val;
            if (d[j].first > M - weight && M + weight > d[j].first)
            {
                val = (d[j].first + M + weight) / 2.0;
            }
            else
            {
                val = max(d[j].first, M);
            }
            answer = min(answer, val);
            M = max(M, d[j].second);
        }
    }
    cout << fixed << setprecision(2) << answer << nl;
    return 0;
}
