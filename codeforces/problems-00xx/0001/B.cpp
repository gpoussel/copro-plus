#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Codeforces - Codeforces Beta Round 1
// B. Spreadsheets

string to_column_name(int col_number)
{
    string name;
    if (col_number == 0)
    {
        throw invalid_argument("col_number must be greater than 0");
    }
    while (col_number > 0)
    {
        int remainder = col_number % 26;
        if (remainder == 0)
        {
            remainder = 26;
        }
        name.insert(name.begin(), (char)((int)'A' + remainder - 1));
        col_number = col_number / 26 - (remainder == 26);
    }
    return name;
}

int to_column_number(string column_name)
{
    int col_number = 0;
    for (char c : column_name)
    {
        col_number = col_number * 26 + c - (int)'A' + 1;
    }
    return col_number;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        string coordinate;
        cin >> coordinate;
        size_t first_letters_end = 0;
        while (first_letters_end < coordinate.length() && isalpha(coordinate[first_letters_end]))
        {
            ++first_letters_end;
        }
        size_t c_pos = coordinate.find('C', first_letters_end);
        if (c_pos != string::npos)
        {
            // Format: R_C_
            string row_number_str = coordinate.substr(first_letters_end, c_pos - first_letters_end);
            string column_number_str = coordinate.substr(c_pos + 1);
            int row_number = stoi(row_number_str);
            int column_number = stoi(column_number_str);
            cout << to_column_name(column_number) << row_number << endl;
        }
        else
        {
            // Format: AZ_
            string column_name = coordinate.substr(0, first_letters_end);
            string row_number_str = coordinate.substr(first_letters_end);
            int row_number = stoi(row_number_str);
            cout << 'R' << row_number << 'C' << to_column_number(column_name) << endl;
        }
    }
    return 0;
}
