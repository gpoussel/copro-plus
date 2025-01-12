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

// Codeforces - Codeforces Round 892 (Div. 2)
// A. United We Stand

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
    set<int> primes_set(primes.begin(), primes.end());
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int length;
        cin >> length;
        vector<int> arr(length);
        vector<int> c;
        for (int j = 0; j < length; j++)
        {
            cin >> arr[j];
        }
        sort(arr.begin(), arr.end(), greater<int>());
        int max_value = arr[0];
        int j = 0;
        int c_size = 0;
        int b_size = (int)arr.size();
        while (b_size > 0 && arr[j] == max_value)
        {
            c_size++;
            b_size--;
            j++;
        }
        if (j != (int)arr.size())
        {
            cout << b_size << ' ' << c_size << nl;
            for (int j = 0; j < b_size; ++j)
            {
                cout << (j > 0 ? " " : "") << arr[c_size + j];
            }
            cout << nl;
            for (int j = 0; j < c_size; ++j)
            {
                cout << (j > 0 ? " " : "") << max_value;
            }
            cout << nl;
        }
        else
        {
            cout << -1 << nl;
        }
    }
    return 0;
}
