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
const ll maxn = 1e6;
using namespace std;

ll n, res, x, d[1000006];
vector<ll> a;

signed main()
{
    if (fopen("BAI5.inp", "r"))
    {
        freopen("BAI5.inp", "r", stdin);
        freopen("BAI5.out", "w", stdout);
    }
    ios;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        d[x] = 1;
    }
    for (int i = 1; i <= maxn; i++)
    {
        if (d[i] == 1)
        {
            a.pb(i);
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        ll pos = lower_bound(a.begin(), a.end(), a[i] / 2) - a.begin();
        res = max(res, a[i] % a[pos]);
        if (pos >= 1)
        {
            res = max(res, a[i] % a[pos - 1]);
        }
        if (pos >= 2)
        {
            res = max(res, a[i] % a[pos - 2]);
        }
        if (pos + 1 <= i)
        {
            res = max(res, a[i] % a[pos + 1]);
        }
    }
    cout << res;
}