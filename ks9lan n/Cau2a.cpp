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
using namespace std;

ll t, a, b, res[10000005];

ll tcs(ll n)
{
    ll res = 0;
    while (n > 0)
    {
        res += n % 10;
        n /= 10;
    }
    return res;
}

vector<bool> nt(1e7 + 5, true);
void sieve()
{
    nt[0] = nt[1] = 0;
    for (int i = 2; i * i <= 1e7; i++)
    {
        if (nt[i])
        {
            for (int j = i * i; j <= 1e7; j += i)
            {
                nt[j] = 0;
            }
        }
    }
    for (int i = 2; i <= 1e7; i++)
    {
        if (nt[i])
        {
            if (nt[tcs(i)])
            {
                res[i] = res[i - 1] + 1;
            }
            else
            {
                res[i] = res[i - 1];
            }
        }
        else
        {
            res[i] = res[i - 1];
        }
    }
}

signed main()
{
    if (fopen("Cau2a.inp", "r"))
    {
        freopen("Cau2a.inp", "r", stdin);
        freopen("Cau2a.out", "w", stdout);
    }
    ios;
    sieve();
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << res[b] - res[a - 1] << "\n";
    }
}