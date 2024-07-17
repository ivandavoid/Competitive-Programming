#include <bits/stdc++.h>
#define pb push_back
#define pp pop_back
#define lb lower_bound
#define ub upper_bound
#define fi first
#define se second
#define ll long long
#define ull unsigned long long
#define str string
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vii vector<int>
#define vll vector<long long>
#define mpii map<int, int>
#define mpsi map<string, int>
using namespace std;

ll t, l, r;

ll solve(ll l, ll r)
{
    ll res = 0;
    res += (r / 4 - (l - 1) / 4) + (r / 7 - (l - 1) / 7) + (r / 11 - (l - 1) / 11);
    res -= ((r / 28 - (l - 1) / 28) + (r / 77 - (l - 1) / 77) + (r / 44 - (l - 1) / 44));
    res += (r / 308 - (l - 1) / 308);
    if (l == 0)
        res++;
    return res;
}

signed main()
{
    if (fopen("name.inp", "r"))
    {
        freopen("name.inp", "r", stdin);
        freopen("name.out", "w", stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> t;
    while (t--)
    {
        cin >> l >> r;
        cout << solve(l, r) << "\n";
    }
}