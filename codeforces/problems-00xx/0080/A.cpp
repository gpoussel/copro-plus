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

// Codeforces - Codeforces Beta Round 69 (Div. 2 Only)
// A. Panoramix's Prediction

const int N = 50;
int spf[N];
vector<int> primes;
void sieve()
{
    for (int i = 2; i < N; i++)
    {
        if (spf[i] == 0)
            spf[i] = i, primes.push_back(i);
        int sz = (int)primes.size();
        for (int j = 0; j < sz && i * primes[j] < N && primes[j] <= spf[i]; j++)
        {
            spf[i * primes[j]] = primes[j];
        }
    }
}

int main()
{
    sieve();
    int n;
    cin >> n;
    int m;
    cin >> m;

    int prime_index = (int)(find(primes.begin(), primes.end(), n) - primes.begin());
    cout << (primes[prime_index + 1] == m ? "YES" : "NO") << nl;
    return 0;
}
