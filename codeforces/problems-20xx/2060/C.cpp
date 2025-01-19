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

// Codeforces - Codeforces Round 998 (Div. 3)
// C. Game of Mathletes

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        map<int, int> frequencies;
        for (int j = 0; j < n; j++)
        {
            int number;
            cin >> number;
            frequencies[number]++;
        }
        int garbage_bob_numbers = 0;
        int alice_first_numbers = 0;
        int existing_pairs = 0;
        for (auto [number, frequency] : frequencies)
        {
            int remaining = k - number;
            if (number == remaining)
            {
                existing_pairs += frequency / 2;
                if (frequency % 2 == 1)
                {
                    garbage_bob_numbers++;
                }
            }
            else if (frequencies.contains(remaining))
            {
                int pairs = min(frequency, frequencies[remaining]);
                garbage_bob_numbers += frequency - pairs;
                if (remaining < number)
                {
                    existing_pairs += pairs;
                }
            }
            else
            {
                alice_first_numbers += frequency;
            }
        }
        if (existing_pairs == 0)
        {
            cout << 0 << nl;
            continue;
        }
        if (alice_first_numbers <= garbage_bob_numbers)
        {
            cout << existing_pairs << nl;
            continue;
        }
        if ((alice_first_numbers + garbage_bob_numbers) % 2 == 0)
        {
            cout << existing_pairs << nl;
            continue;
        }
        cout << existing_pairs - 1 << nl;
    }
    return 0;
}
