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

ll n, k, a[100005], maxx = INT_MIN, s;

bool check(ll mid)
{
    ll res = 1, sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] > mid)
        {
            return 0;
        }
        sum += a[i];
        if (sum > mid)
        {
            res++;
            sum = a[i];
        }
    }
    return res <= k;
}

ll bs(ll l, ll r)
{
    ll res = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (check(mid))
        {
            res = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return res;
}

signed main()
{
    if (fopen("cau5.inp", "r"))
    {
        freopen("cau5.inp", "r", stdin);
        freopen("cau5.out", "w", stdout);
    }
    ios;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        maxx = max(maxx, a[i]);
        s += a[i];
    }
    cout << bs(maxx, s);
}