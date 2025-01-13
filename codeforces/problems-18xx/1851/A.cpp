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

// Codeforces - Codeforces Round 888 (Div. 3)
// A. Escalator Conversations

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int number_of_people;
        cin >> number_of_people;
        int number_of_steps;
        cin >> number_of_steps;
        int step_height;
        cin >> step_height;
        long long vlad_height;
        cin >> vlad_height;
        int count = 0;
        for (int j = 0; j < number_of_people; j++)
        {
            long long height;
            cin >> height;

            long long diff = abs(height - vlad_height);
            if (diff > 0 && diff % step_height == 0 && diff / step_height < number_of_steps)
            {
                ++count;
            }
        }
        cout << count << nl;
    }
    return 0;
}
