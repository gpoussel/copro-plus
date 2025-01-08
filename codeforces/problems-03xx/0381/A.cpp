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

// Codeforces - Codeforces Round 223 (Div. 2)
// A. Sereja and Dima

int main()
{
    int n;
    cin >> n;
    vector<int> cards(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> cards[i];
    }

    int sereja = 0;
    int dima = 0;
    int left = 0;
    int right = (int)cards.size() - 1;
    int turn = 0;
    while (left <= right)
    {
        if (cards[left] > cards[right])
        {
            if (turn % 2 == 0)
            {
                sereja += cards[left];
            }
            else
            {
                dima += cards[left];
            }
            left++;
        }
        else
        {
            if (turn % 2 == 0)
            {
                sereja += cards[right];
            }
            else
            {
                dima += cards[right];
            }
            right--;
        }
        turn++;
    }
    cout << sereja << " " << dima << nl;
    return 0;
}
