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
const int MOD = 1e9 + 7;
using namespace std;

ll n, x, cnt[1000006];

vector<int> nt(1e7 + 5, true);
void sieve()
{
    nt[0] = nt[1] = 0;
    for (int i = 2; i <= sqrt(1e6); i++)
    {
        if (nt[i])
        {
            for (int j = 2 * i; j <= 1e6; j += i)
            {
                nt[j] = 0;
            }
        }
    }
    for (int i = 2; i <= 1e6; i++)
    {
        if (nt[i])
        {
            nt[i] = i;
        }
    }
}

void pt(ll n)
{
    while (n > 1)
    {
        cnt[nt[n]]++;
        n = n / nt[n];
    }
}

signed main()
{
    if (fopen("DIVISOR.inp", "r"))
    {
        freopen("DIVISOR.inp", "r", stdin);
        freopen("DIVISOR.out", "w", stdout);
    }
    ios;
    sieve();
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        pt(x);
    }
    ll res = 1;
    for (int i = 2; i <= 1e6; i++)
    {
        if (cnt[i] > 0)
        {
            res = (res * (cnt[i] + 1)) % MOD;
        }
    }
    cout << res % MOD;
}