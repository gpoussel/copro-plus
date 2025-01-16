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

// Codeforces - Codeforces Round 826 (Div. 3)
// A. Compare T-Shirt Sizes

int get_size_category(string size)
{
    char last_char = size[size.size() - 1];
    if (last_char == 'S')
    {
        return 1;
    }
    if (last_char == 'M')
    {
        return 2;
    }
    return 3;
}

char compare(string size_a, string size_b)
{
    if (size_a == size_b)
    {
        return '=';
    }
    int size_category_a = get_size_category(size_a);
    int size_category_b = get_size_category(size_b);
    if (size_category_a < size_category_b)
    {
        return '<';
    }
    if (size_category_a > size_category_b)
    {
        return '>';
    }
    if (size_a.size() < size_b.size())
    {
        return size_category_a == 1 ? '>' : '<';
    }
    if (size_a.size() > size_b.size())
    {
        return size_category_a == 3 ? '>' : '<';
    }
    throw invalid_argument("Invalid sizes");
}

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        string size_a;
        cin >> size_a;
        string size_b;
        cin >> size_b;
        cout << compare(size_a, size_b) << nl;
    }
    return 0;
}
