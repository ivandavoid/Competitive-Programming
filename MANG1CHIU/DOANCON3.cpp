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

ll n, a[1000006];

signed main()
{
    if (fopen("DOANCON3.inp", "r"))
    {
        freopen("DOANCON3.inp", "r", stdin);
        freopen("DOANCON3.out", "w", stdout);
    }
    ios;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll res = a[0], rl = 0, rr = 0;
    ll s = 0, pos = -1;
    for (int r = 1; r <= n; ++r)
    {
        s += a[r];
        if (s > res)
        {
            res = s;
            rl = pos + 1;
            rr = r;
        }
        if (s < 0)
        {
            s = 0;
            pos = r;
        }
    }
    cout << res;
}