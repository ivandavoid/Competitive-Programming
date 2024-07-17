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

ll n, s, a[1000006], pre[1000006];

bool check(ll k)
{
    ll pos = lower_bound(a + 1, a + n + 1, k) - a;
    ll res = (pre[n] - pre[pos - 1] - k * (n - pos + 1));
    return (res >= s);
}

ll bs(ll l, ll r)
{
    ll res = -1;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (check(mid))
        {
            res = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return res;
}

signed main()
{
    if (fopen("BAI4.inp", "r"))
    {
        freopen("BAI4.inp", "r", stdin);
        freopen("BAI4.out", "w", stdout);
    }
    ios;
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    ll m = a[n];
    for (int i = 1; i <= n; i++)
        pre[i] = pre[i - 1] + a[i];
    cout << bs(0, m);
}
