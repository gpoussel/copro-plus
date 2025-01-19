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

// Codeforces - Educational Codeforces Round 26
// A. Text Volume

vector<string> split(const string &s, char delim)
{
    vector<string> result;
    stringstream ss(s);
    string item;
    while (getline(ss, item, delim))
    {
        result.push_back(item);
    }
    return result;
}

int get_volume(const string &word)
{
    return (int)count_if(word.begin(), word.end(), [](char c)
                         { return isalpha(c) && isupper(c); });
}

int main()
{
    int length;
    cin >> length;
    string str;
    getline(cin, str);
    getline(cin, str);
    auto words = split(str, ' ');
    deb(words.size());
    int result = accumulate(words.begin(), words.end(), 0, [](int acc, const string &word)
                            { return max(acc, get_volume(word)); });
    cout << result << nl;
    return 0;
}
