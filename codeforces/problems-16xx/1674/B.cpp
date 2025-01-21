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

// Codeforces - Codeforces Round 786 (Div. 3)
// B. Dictionary

int get_position(char first_letter, char second_letter)
{
    int first_letter_position = first_letter - 'a';
    int second_letter_position = second_letter - 'a';
    return first_letter_position * 25 + second_letter_position + 1 + (second_letter_position > first_letter_position ? -1 : 0);
}

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int i = 0; i < test_cases; i++)
    {
        string word;
        cin >> word;
        char first_letter = word[0];
        char second_letter = word[1];
        cout << get_position(first_letter, second_letter) << nl;
    }
    return 0;
}
