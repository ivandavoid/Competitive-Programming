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

ll n, k;

bool check(ll mid, ll k, vector<ll> &x)
{
    ll cnt = 1, c = x[0];
    for (ll i = 1; i < x.size(); i++)
    {
        if (x[i] - c > 2 * mid)
        {
            c = x[i];
            cnt++;
        }
    }
    return cnt <= k;
}

signed main()
{
    if (fopen("daovang.inp", "r"))
    {
        freopen("daovang.inp", "r", stdin);
        freopen("daovang.out", "w", stdout);
    }
    ios;
    cin >> n >> k;
    vector<ll> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    ll l = 0, r = 1e9, res = r;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (check(mid, k, x))
        {
            res = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << res;
}
