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

ll n, m, res;
vll a;

signed main()
{
    if (fopen("CAU32.inp", "r"))
    {
        freopen("CAU32.inp", "r", stdin);
        freopen("CAU32.out", "w", stdout);
    }
    ios;
    cin >> n >> m;
    a.resize(n + 1);
    ll x = n * (n + 1) / 2;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll l = 1, r = 1;
    while (r <= n)
    {
        if (a[r] >= m)
        {
            res += (r - l + 1) * (r - l + 2) / 2;
            l = r;
        }
        else
        {
            r++;
        }
    }
    cout << x - res;
}