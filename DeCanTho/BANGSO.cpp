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

void sub1()
{
    unordered_map<ll, ll> cnt;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cnt[i * j]++;
        }
    }
    cout << cnt[k];
}

void sub2()
{
    ll res = 0;
    for (int i = 1; i <= n; i++)
    {
        if (k % i == 0 && k <= n * i)
        {
            res++;
        }
    }
    cout << res;
}

signed main()
{
    if (fopen("BANGSO.inp", "r"))
    {
        freopen("BANGSO.inp", "r", stdin);
        freopen("BANGSO.out", "w", stdout);
    }
    ios;
    cin >> n >> k;
    if (n <= 1e3 && k <= n * n)
    {
        sub1();
    }
    else
    {
        sub2();
    }
}