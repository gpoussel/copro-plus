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
// D. Mysterious Present

struct Envelope
{
    int width, height, position;
};

int main()
{
    int n, w, h;
    cin >> n >> w >> h;

    vector<Envelope> envelopes;
    bool card_fits = false;
    for (int i = 0; i < n; ++i)
    {
        int width, height;
        cin >> width >> height;
        if (width > w && height > h)
        {
            card_fits = true;
            Envelope envelope = {width, height, i + 1};
            envelopes.push_back(envelope);
        }
    }

    if (!card_fits)
    {
        cout << 0 << nl;
        return 0;
    }

    sort(envelopes.begin(), envelopes.end(), [](const Envelope &a, const Envelope &b)
         { return a.width < b.width; });

    vector<int> dp(envelopes.size(), 1);
    vector<int> previous(envelopes.size());
    int max_length = 1;
    int max_length_index = 0;
    for (size_t i = 0; i < envelopes.size(); ++i)
    {
        for (size_t j = i + 1; j < envelopes.size(); ++j)
        {
            // For the envelope j to fit inside the envelope i, the width and height of j must be less than the width and height of i, respectively.
            if (envelopes[i].width < envelopes[j].width && envelopes[i].height < envelopes[j].height && dp[j] < dp[i] + 1)
            {
                // The envelope j fits inside the envelope i.
                previous[j] = (int)i;
                dp[j] = dp[i] + 1;
                if (dp[j] > max_length)
                {
                    max_length = dp[j];
                    max_length_index = (int)j;
                }
            }
        }
    }

    cout << max_length << nl;

    std::vector<int> used_envelopes;
    int current = max_length_index;
    for (int k = 0; k < max_length; k++)
    {
        used_envelopes.push_back(envelopes[current].position);
        current = previous[current];
    }
    reverse(used_envelopes.begin(), used_envelopes.end());

    for (auto &k : used_envelopes)
    {
        cout << k << " ";
    }
    cout << nl;
    return 0;
}
