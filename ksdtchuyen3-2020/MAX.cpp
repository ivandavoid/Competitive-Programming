#include <bits/stdc++.h>
#define pb push_back
#define ppb pop_back
#define sti stack<int>
#define stll stack<long long>
#define pf push_front
#define sz size()
#define lb lower_bound
#define ub upper_bound
#define fi first
#define se second
#define ll long long
#define ull unsigned long long
#define str string
#define ss stringstream
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vii vector<int>
#define vll vector<long long>
#define vb vector<bool>
#define mpii map<int, int>
#define mpsi map<string, int>
#define mp make_pair
#define ios                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

ll n, a[500005], res;

void sub1()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            res = max(res, abs(a[i] - a[j]) + abs(i - j));
        }
    }
    cout << res;
}

void sub2()
{
    ll b[500005], c[500005], mb[500005], mc[500005];
    for (int i = 1; i <= n; i++)
    {
        b[i] = a[i] + i;
        c[i] = i - a[i];
    }
    mb[1] = b[1];
    mc[1] = c[1];
    for (int i = 2; i <= n; i++)
    {
        mb[i] = min(mb[i - 1], b[i]);
        mc[i] = min(mc[i - 1], c[i]);
    }
    for (int i = 2; i <= n; i++)
    {
        res = max({res, b[i] - mb[i - 1], c[i] - mc[i - 1]});
    }
    cout << res;
}

signed main()
{
    if (fopen("MAX.inp", "r"))
    {
        freopen("MAX.inp", "r", stdin);
        freopen("MAX.out", "w", stdout);
    }
    ios;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    if (n <= 1e3)
    {
        sub1();
    }
    else
    {
        sub2();
    }
}