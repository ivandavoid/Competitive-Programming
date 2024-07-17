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
#define ll long long ///** TEMPLATE OWNER: NGUYEN TUAN TU - Ivan da Void
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
const int MOD = 1000000007;
using namespace std;

ll n, res = 1, cnt[1000006], nt[10000007];

void sieve()
{
    for (ll i = 2; i <= sqrt(1e6); i++)
        if (nt[i] == 0)
            for (ll j = i; j <= 1e6; j += i)
                nt[j] = i;
    for (ll i = 1; i <= 1e6; i++)
        if (nt[i] == 0)
            nt[i] = i;
}

void pt(ll a, ll b)
{
    while (a > 1)
    {
        cnt[nt[a]] += b;
        a = a / nt[a];
    }
}

signed main()
{
    if (fopen("CAU31.inp", "r"))
    {
        freopen("CAU31.inp", "r", stdin);
        freopen("CAU31.out", "w", stdout);
    }
    ios;
    sieve();
    cin >> n;
    for (ll i = 2; i <= n; i++)
    {
        pt(i, n - i + 1);
    }
    for (ll i = 2; i <= n; i++)
    {
        if (cnt[i] != 0)
            res = res * (cnt[i] + 1) % MOD;
    }
    cout << res;
}
