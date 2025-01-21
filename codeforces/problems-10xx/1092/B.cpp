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

// Codeforces - Codeforces Round 527 (Div. 3)
// B. Teams Forming

int main()
{
    int number_of_students;
    cin >> number_of_students;
    vector<int> skills(number_of_students);
    for (int j = 0; j < number_of_students; j++)
    {
        cin >> skills[j];
    }
    sort(skills.begin(), skills.end());
    long long sum_of_difference = 0;
    for (int j = 0; j < number_of_students; j += 2)
    {
        sum_of_difference += skills[j + 1] - skills[j];
    }
    cout << sum_of_difference << nl;
    return 0;
}
