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

// Codeforces - Codeforces Beta Round 90
// A. Epic Game

int main()
{
    int simon;
    cin >> simon;
    int antisimon;
    cin >> antisimon;
    int stones;
    cin >> stones;
    int turn = 0;
    bool game_over = false;
    while (!game_over)
    {
        if (turn % 2 == 0)
        {
            int expected_stones = gcd(simon, stones);
            if (expected_stones > stones)
            {
                game_over = true;
            }
            else
            {
                stones -= expected_stones;
            }
        }
        else
        {
            int expected_stones = gcd(antisimon, stones);
            if (expected_stones > stones)
            {
                game_over = true;
            }
            else
            {
                stones -= expected_stones;
            }
        }
        ++turn;
    }
    cout << turn % 2 << nl;
    return 0;
}
