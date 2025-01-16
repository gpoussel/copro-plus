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

// Codeforces - Codeforces Round 817 (Div. 4)
// C. Word Game

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        int n;
        cin >> n;
        vector<set<string>> persons(3);
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < n; k++)
            {
                string s;
                cin >> s;
                persons[j].insert(s);
            }
        }
        vector<int> scores(3);
        for (int j = 0; j < 3; ++j)
        {
            vector<set<string>> other_persons;
            for (int k = 0; k < 3; ++k)
            {
                if (k == j)
                {
                    continue;
                }
                other_persons.push_back(persons[k]);
            }
            for (auto &word : persons[j])
            {
                if (other_persons[0].contains(word) && other_persons[1].contains(word))
                {
                    continue;
                }
                else if (other_persons[0].contains(word) || other_persons[1].contains(word))
                {
                    scores[j] += 1;
                }
                else
                {
                    scores[j] += 3;
                }
            }
        }
        cout << scores[0] << " " << scores[1] << " " << scores[2] << nl;
    }
    return 0;
}
