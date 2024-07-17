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

ll n, m, x, res;
unordered_map<ll, ll> cnt;

signed main()
{
    if (fopen("BAI03.inp", "r"))
    {
        freopen("BAI03.inp", "r", stdin);
        freopen("BAI03.out", "w", stdout);
    }
    ios;
    cin >> n >> m;
    for (ll i = 1; i <= n; i++)
    {
        cin >> x;
        cnt[x]++;
    }
    for (ll i = 1; i <= m; i++)
    {
        cin >> x;
        if (cnt[x] > 0)
        {
            cnt[x]--;
        }
        else
        {
            res++;
        }
    }
    cout << res;
}