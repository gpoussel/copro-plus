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

// Codeforces - Codeforces Round 849 (Div. 4)
// C. Prepend and Append

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int operation_count = 0;
        while (((str[operation_count] == '0' && str[str.size() - operation_count - 1] == '1') || (str[operation_count] == '1' && str[str.size() - operation_count - 1] == '0')) && operation_count < n / 2)
        {
            operation_count++;
        }
        cout << n - operation_count * 2 << nl;
    }
    return 0;
}
