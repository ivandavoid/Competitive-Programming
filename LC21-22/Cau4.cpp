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

ll n, k, a[1000006], maxx = INT_MIN, minn = INT_MAX;

bool check(ll mid)
{
    ll res = 0;
    for (int i = 1; i <= n; i++)
    {
        res += a[i] / mid;
    }
    return res >= k;
}

ll bs(ll l, ll r)
{
    ll res = 0;
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
    if (fopen("Cau4.inp", "r"))
    {
        freopen("Cau4.inp", "r", stdin);
        freopen("Cau4.out", "w", stdout);
    }
    ios;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cout << bs(1, 1e9);
}