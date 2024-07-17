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

ll n, m, x, y, res;
vector<pair<ll, ll>> a;

signed main()
{
    if (fopen("giaohang.inp", "r"))
    {
        freopen("giaohang.inp", "r", stdin);
        freopen("giaohang.out", "w", stdout);
    }
    ios;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> x >> y;
        if (x > y)
        {
            a.pb({y, x});
        }
    }
    sort(a.begin(), a.end());
    a.pb({m, m});
    ll d = a[0].fi, c = a[0].se;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i].fi <= c)
        {
            c = max(c, a[i].se);
        }
        else
        {
            res += 2 * (c - d);
            d = a[i].fi, c = a[i].se;
        }
    }
    cout << res + m;
}