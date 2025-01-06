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

// Codeforces - Codeforces Beta Round 65 (Div. 2)
// E. Nuclear Fusion

const array<string, 101> ELEMENT_SYMBOLS = {"", "H", "He", "Li", "Be", "B", "C", "N", "O", "F", "Ne", "Na", "Mg", "Al", "Si", "P", "S", "Cl", "Ar",
                                            "K", "Ca", "Sc", "Ti", "V", "Cr", "Mn", "Fe", "Co", "Ni", "Cu", "Zn", "Ga", "Ge", "As", "Se", "Br", "Kr", "Rb", "Sr", "Y", "Zr", "Nb", "Mo", "Tc",
                                            "Ru", "Rh", "Pd", "Ag", "Cd", "In", "Sn", "Sb", "Te", "I", "Xe", "Cs", "Ba", "La", "Ce", "Pr", "Nd", "Pm", "Sm", "Eu", "Gd", "Tb", "Dy", "Ho",
                                            "Er", "Tm", "Yb", "Lu", "Hf", "Ta", "W", "Re", "Os", "Ir", "Pt", "Au", "Hg", "Tl", "Pb", "Bi", "Po", "At", "Rn", "Fr", "Ra", "Ac", "Th", "Pa",
                                            "U", "Np", "Pu", "Am", "Cm", "Bk", "Cf", "Es", "Fm"};
vector<vector<bool>> dp(19, vector<bool>(1 << 17, false));
vector<vector<int>> recur(19, vector<int>(1 << 17, 0));

int index_of(string symbol)
{
    for (auto i = 0; i < 101; ++i)
    {
        if (ELEMENT_SYMBOLS[i] == symbol)
            return i;
    }
    return 0;
}
bool check_bit(int num, size_t i) { return num & 1 << i; }

void recursion(int i, int mask, vector<int> &initial_atoms, vector<int> &target_atoms)
{
    if (i == 0)
    {
        return;
    }
    int used_part = recur[i][mask];
    recursion(i - 1, (mask ^ used_part), initial_atoms, target_atoms);
    int chemical_count = 0;
    for (size_t j = 0; j < initial_atoms.size(); j++)
    {
        if (check_bit(used_part, j))
        {
            cout << (chemical_count > 0 ? "+" : "") << ELEMENT_SYMBOLS[initial_atoms[j]];
            chemical_count++;
        }
    }
    cout << "->" << ELEMENT_SYMBOLS[target_atoms[i - 1]] << nl;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> initial_atoms;
    for (auto i = 0; i < n; ++i)
    {
        string atom;
        cin >> atom;
        auto idx = index_of(atom);
        initial_atoms.push_back(idx);
    }
    vector<int> target_atoms;
    for (auto i = 0; i < k; ++i)
    {
        string atom;
        cin >> atom;
        auto idx = index_of(atom);
        target_atoms.push_back(idx);
    }

    // DP[i][j][mask]: We are at the ith element, j atoms allocated, with the mask of used atoms as mask. It stores if
    // this status is reachable
    vector<vector<int>> masks(k + 1);
    for (int mask = 1; mask < (1 << n); ++mask)
    {
        int sum = 0;
        for (int i = 0; i < n; ++i)
        {
            if (check_bit(mask, i))
            {
                sum += initial_atoms[i];
            }
        }
        for (int i = 1; i <= k; ++i)
        {
            if (sum == target_atoms[i - 1])
            {
                masks[i].push_back(mask);
            }
        }
    }

    dp[0][0] = true;

    for (int i = 0; i < k; ++i)
    {
        for (int mask = 0; mask < (1 << n); ++mask)
        {
            if (dp[i][mask])
            {
                for (size_t current = 0; current < masks[i + 1].size(); ++current)
                {
                    if ((mask & masks[i + 1][current]) == 0)
                    {
                        // AND operation return 0, which means there are no overlapping 1s.
                        // The mask we use for next will be created from an OR operation
                        dp[i + 1][(mask | masks[i + 1][current])] = true;
                        recur[i + 1][(mask | masks[i + 1][current])] = masks[i + 1][current];
                        // When we recursion back, we XOR our mask with the recursion part.
                    }
                }
            }
        }
    }
    if (!dp[k][(1 << n) - 1])
    {
        cout << "NO" << nl;
    }
    else
    {
        cout << "YES" << nl;
        recursion(k, (1 << n) - 1, initial_atoms, target_atoms);
    }
    return 0;
}
