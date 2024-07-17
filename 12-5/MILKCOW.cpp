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

ll n, res1, res2;
pair<ll, ll> a[1000005];

signed main()
{
    if (fopen("MILKCOW.inp", "r"))
    {
        freopen("MILKCOW.inp", "r", stdin);
        freopen("MILKCOW.out", "w", stdout);
    }
    ios;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].fi >> a[i].se;
    }
    sort(a + 1, a + n + 1);
    ll d = a[1].fi, c = a[1].se;
    for (int i = 1; i <= n; i++)
    {
        if (a[i].fi <= c)
        {
            c = max(c, a[i].se);
        }
        else
        {
            res1 = max(res1, c - d);
            res2 = max(res2, a[i].fi - c);
            d = a[i].fi;
            c = a[i].se;
        }
    }
    res1 = max(res1, c - d);
    cout << res1 << " " << res2;
}