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

// Codeforces - Codeforces Round 280 (Div. 2)
// C. Vanya and Exams

struct Grade
{
    long long grade;
    long long essays;
};

int main()
{
    long long n, r, avg;
    cin >> n >> r >> avg;

    long long grade_required = avg * n;

    vector<Grade> grades(n);
    for (int i = 0; i < n; i++)
    {
        long long a, b;
        cin >> a >> b;

        grades[i] = {a, b};
        grade_required -= a;
    }
    if (grade_required <= 0)
    {
        cout << 0 << nl;
        return 0;
    }

    sort(grades.begin(), grades.end(), [](const Grade &a, const Grade &b)
         { return a.essays < b.essays; });

    long long total_essays = 0;
    int position = 0;
    while (grade_required > 0)
    {
        long long grades_to_add = min(r - grades[position].grade, grade_required);
        total_essays += (long long)grades_to_add * (long long)grades[position].essays;
        grade_required -= grades_to_add;
        position++;
    }

    cout << total_essays << nl;
    return 0;
}
