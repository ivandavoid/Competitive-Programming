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

ll n, k, a[100005], res;

signed main()
{
    if (fopen("MUAHE.inp", "r"))
    {
        freopen("MUAHE.inp", "r", stdin);
        freopen("MUAHE.out", "w", stdout);
    }
    ios;
    cin >> n >> k;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll s = 0, r = 0;
    for (ll l = 1; l <= n; l++)
    {
        while (s + a[r + 1] <= k && r <= n)
        {
            r++;
            s += a[r];
        }
        res = max(res, r - l + 1);
        s -= a[l];
    }
    cout << res;
}