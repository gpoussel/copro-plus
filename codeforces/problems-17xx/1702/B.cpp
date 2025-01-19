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

// Codeforces - Codeforces Round 805 (Div. 3)
// B. Polycarp Writes a String from Memory

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        string str;
        cin >> str;
        int position = 0;
        int days = 0;
        while (position < (int)str.size())
        {
            int length = 1;
            set<char> visited_characters;
            while (visited_characters.size() <= 3 && position + length <= (int)str.size())
            {
                visited_characters.insert(str[position + length - 1]);
                if (visited_characters.size() == 4)
                {
                    break;
                }
                length++;
            }
            position += length - 1;
            days++;
        }
        cout << days << nl;
    }
    return 0;
}
