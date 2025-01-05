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

// Codeforces - Codeforces Round 173 (Div. 2)
// E. Sausage Maximization

struct Trie
{
    static const int B = 61;
    struct node
    {
        node *nxt[2];
        int sz;
        node()
        {
            nxt[0] = nxt[1] = NULL;
            sz = 0;
        }
    } *root;
    Trie()
    {
        root = new node();
    }
    void insert(long long val)
    {
        node *cur = root;
        cur->sz++;
        for (int i = B - 1; i >= 0; i--)
        {
            long long b = val >> i & 1;
            if (cur->nxt[b] == NULL)
                cur->nxt[b] = new node();
            cur = cur->nxt[b];
            cur->sz++;
        }
    }
    long long query(long long x, long long k)
    { // number of values s.t. val ^ x < k
        node *cur = root;
        long long ans = 0;
        for (int i = B - 1; i >= 0; i--)
        {
            if (cur == NULL)
                break;
            long long b1 = x >> i & 1, b2 = k >> i & 1;
            if (b2 == 1)
            {
                if (cur->nxt[b1])
                    ans += cur->nxt[b1]->sz;
                cur = cur->nxt[!b1];
            }
            else
                cur = cur->nxt[b1];
        }
        return ans;
    }
    long long get_max(long long x)
    { // returns maximum of val ^ x
        node *cur = root;
        long long ans = 0;
        for (int i = B - 1; i >= 0; i--)
        {
            long long k = x >> i & 1;
            if (cur->nxt[!k])
                cur = cur->nxt[!k], ans <<= 1, ans++;
            else
                cur = cur->nxt[k], ans <<= 1;
        }
        return ans;
    }
    int get_min(int x)
    { // returns minimum of val ^ x
        node *cur = root;
        int ans = 0;
        for (int i = B - 1; i >= 0; i--)
        {
            int k = x >> i & 1;
            if (cur->nxt[k])
                cur = cur->nxt[k], ans <<= 1;
            else
                cur = cur->nxt[!k], ans <<= 1, ans++;
        }
        return ans;
    }
    void del(node *cur)
    {
        for (int i = 0; i < 2; i++)
            if (cur->nxt[i])
                del(cur->nxt[i]);
        delete (cur);
    }
} t;

int main()
{
    int n;
    cin >> n;

    vector<long long> deliciousness(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> deliciousness[i];
    }

    vector<long long> prefixes(n + 1, 0);
    for (int i = 1; i <= n; ++i)
    {
        prefixes[i] = prefixes[i - 1] ^ deliciousness[i - 1];
    }
    vector<long long> suffixes(n + 1, 0);
    for (int i = n - 1; i >= 0; i--)
    {
        suffixes[i] = suffixes[i + 1] ^ deliciousness[i];
    }

    Trie t;
    long long best_so_far = 0;
    for (int i = n; i >= 0; i--)
    {
        t.insert(suffixes[i]);
        best_so_far = max(best_so_far, t.get_max(prefixes[i]));
    }
    cout << best_so_far << nl;
    return 0;
}
