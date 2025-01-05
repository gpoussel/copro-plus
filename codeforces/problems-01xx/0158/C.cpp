#include <algorithm>
#include <array>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <map>
#include <numbers>
#include <set>
#include <string>
#include <vector>
using namespace std;

#define nl '\n'
#define deb(x) cerr << #x " = " << x << nl
#define EPSILON 1e-9
#define equals(a, b) (fabs(a - b) < EPSILON)
#define almost_equals(a, b) (fabs(a - b) < 1e-4)

// Codeforces - VK Cup 2012 Qualification Round 1
// C. Cd and pwd commands

int main()
{
    int n;
    cin >> n;

    vector<string> parts;

    for (int i = 0; i < n; ++i)
    {
        string command;
        cin >> command;

        if (command == "pwd")
        {
            cout << "/";
            for (const auto &part : parts)
            {
                cout << part << "/";
            }
            cout << nl;
        }
        else if (command == "cd")
        {
            // cd command
            string path;
            cin >> path;

            // split the path by /
            size_t start = 0;
            if (path[0] == '/')
            {
                parts.clear();
                start++;
            }
            size_t end = path.find('/', start);
            while (end != string::npos)
            {
                string dir = path.substr(start, end - start);
                if (dir == "..")
                {
                    if (!parts.empty())
                    {
                        parts.pop_back();
                    }
                }
                else
                {
                    parts.push_back(dir);
                }
                start = end + 1;
                end = path.find('/', start);
            }
            string last_dir = path.substr(start, end - start);
            if (last_dir == "..")
            {
                if (!parts.empty())
                {
                    parts.pop_back();
                }
            }
            else
            {
                parts.push_back(last_dir);
            }
        }
    }

    return 0;
}
