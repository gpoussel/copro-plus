#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <numbers>
#include <string>
#include <vector>
using namespace std;
using namespace std::numbers;

#define nl '\n'
#define deb(x) cerr << #x " = " << x << nl
#define EPSILON 1e-9
#define equals(a, b) (fabs(a - b) < EPSILON)
#define almost_equals(a, b) (fabs(a - b) < 1e-4)

// Codeforces - Codeforces Beta Round 1
// C. Ancient Berland Circus

struct PT
{
    double x, y;
    PT() { x = 0, y = 0; }
    PT(double x, double y) : x(x), y(y) {}
    PT(const PT &p) : x(p.x), y(p.y) {}
    PT operator+(const PT &a) const { return PT(x + a.x, y + a.y); }
    PT operator-(const PT &a) const { return PT(x - a.x, y - a.y); }
    PT operator*(const double a) const { return PT(x * a, y * a); }
    friend PT operator*(const double &a, const PT &b) { return PT(a * b.x, a * b.y); }
    PT operator/(const double a) const { return PT(x / a, y / a); }
    const PT &operator=(const PT &a)
    {
        x = a.x, y = a.y;
        return *this;
    }
    double norm() { return sqrt(x * x + y * y); }
    double norm2() { return x * x + y * y; }
    PT perp() { return PT(-y, x); }
    double arg() { return atan2(y, x); }
};
istream &operator>>(istream &in, PT &p) { return in >> p.x >> p.y; }
ostream &operator<<(ostream &out, PT &p) { return out << "(" << p.x << "," << p.y << ")"; }
inline double dot(PT a, PT b) { return a.x * b.x + a.y * b.y; }
inline double dist2(PT a, PT b) { return dot(a - b, a - b); }
inline double dist(PT a, PT b) { return sqrt(dot(a - b, a - b)); }
inline double cross(PT a, PT b) { return a.x * b.y - a.y * b.x; }
PT rotatecw90(PT a) { return PT(a.y, -a.x); }
double area_of_triangle(PT a, PT b, PT c)
{
    return fabs(cross(b - a, c - a) * 0.5);
}

bool line_line_intersection(PT a, PT b, PT c, PT d, PT &ans)
{
    double a1 = a.y - b.y, b1 = b.x - a.x, c1 = cross(a, b);
    double a2 = c.y - d.y, b2 = d.x - c.x, c2 = cross(c, d);
    double det = a1 * b2 - a2 * b1;
    if (det == 0)
        return 0;
    ans = PT((b1 * c2 - b2 * c1) / det, (c1 * a2 - a1 * c2) / det);
    return 1;
}
struct circle
{
    PT p;
    double r;
    circle() {}
    circle(PT _p, double _r) : p(_p), r(_r) {};
    // center (x, y) and radius r
    circle(double x, double y, double _r) : p(PT(x, y)), r(_r) {};
    // circumcircle of a triangle
    // the three points must be unique
    circle(PT a, PT b, PT c)
    {
        b = (a + b) * 0.5;
        c = (a + c) * 0.5;
        line_line_intersection(b, b + rotatecw90(a - b), c, c + rotatecw90(a - c), p);
        r = dist(a, p);
    }
};

double get_angle(double radius, double side)
{
    double ratio = side / radius;
    if (equals(ratio, 2))
    {
        return pi;
    }
    return 2 * asin(side / (2 * radius));
}

bool modulo_tolerance(double a, double b)
{
    double remainder = fmod(b, a);
    if (almost_equals(remainder, 0))
    {
        return true;
    }
    double close = (remainder / a) - 1;
    if (almost_equals(close, 0))
    {
        return true;
    }
    return false;
}

int get_number_of_sides(double angle1, double angle2, double angle3)
{
    vector<double> angles;
    angles.push_back(angle1);
    angles.push_back(angle2);
    angles.push_back(angle3);
    sort(angles.begin(), angles.end());
    double sum_of_angles = angles[0] + angles[1] + angles[2];
    if (!almost_equals(sum_of_angles, 2 * pi))
    {
        angles[2] = 2 * pi - angles[2];
    }
    double min_angle = angles[0];
    for (int i = 2; i < 35; ++i)
    {
        if (modulo_tolerance(min_angle, angles[1]) && modulo_tolerance(min_angle, angles[2]))
        {
            return (int)round(angles[0] / min_angle + angles[1] / min_angle + angles[2] / min_angle);
        }
        else
        {
            min_angle = angles[0] / i;
        }
    }
    return 0;
}

double get_area(int sides, double radius)
{
    return .5 * sides * radius * radius * sin(2 * pi / sides);
}

int main()
{
    PT a, b, c;
    cin >> a >> b >> c;

    double sideA = dist(b, c);
    double sideB = dist(a, c);
    double sideC = dist(a, b);

    circle circ(a, b, c);
    double angleA = get_angle(circ.r, sideA);
    double angleB = get_angle(circ.r, sideB);
    double angleC = get_angle(circ.r, sideC);

    int number_of_sides = get_number_of_sides(angleA, angleB, angleC);
    double area = get_area(number_of_sides, circ.r);

    cout << fixed << setprecision(8) << area << endl;
    return 0;
}
