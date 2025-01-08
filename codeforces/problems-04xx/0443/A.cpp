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

// Codeforces - Codeforces Round 253 (Div. 2)
// A. Anton and Letters

vector<string> split_str(string s, string del)
{
    vector<string> result;
    int end = (int)s.find(del);
    while (end != -1)
    {
        result.push_back(s.substr(0, end));
        s.erase(s.begin(), s.begin() + end + del.size());
        end = (int)s.find(del);
    }
    result.push_back(s.substr(0, end));
    return result;
}

int main()
{
    string str;
    getline(cin, str);
    if (str.size() == 2)
    {
        cout << 0 << nl;
        return 0;
    }
    vector<string> parts = split_str(str.substr(1, str.size() - 2), ", ");
    set<string> letters(parts.begin(), parts.end());
    cout << letters.size() << nl;
    return 0;
}
