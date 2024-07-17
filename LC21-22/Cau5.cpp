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

ll n, k, res, a[1000006];
unordered_map<ll, ll> cnt;
string s;

ll chia(string s, ll k)
{
    ll t = 0;
    for (ll i = 0; i < s.size(); i++)
        t = (t * 10 + s[i] - 48) % k;
    return t;
}

signed main()
{
    if (fopen("Cau5.inp", "r"))
    {
        freopen("Cau5.inp", "r", stdin);
        freopen("Cau5.out", "w", stdout);
    }
    ios;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> s;
        a[i] = chia(s, k);
        a[i] = (a[i - 1] + a[i]) % k;
    }
    cnt[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        res = res + cnt[a[i]];
        cnt[a[i]]++;
    }
    cout << res;
}
