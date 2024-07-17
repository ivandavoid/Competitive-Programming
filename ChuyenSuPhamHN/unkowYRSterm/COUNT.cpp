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

ll n, m, temp[100006], x, res;
vector<ll> a;

signed main()
{
    if (fopen("COUNT.inp", "r"))
    {
        freopen("COUNT.inp", "r", stdin);
        freopen("COUNT.out", "w", stdout);
    }
    ios;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> temp[i];
    }
    sort(temp + 1, temp + n + 1);
    for (int i = 1; i <= n; i++)
    {
        if (temp[i] != temp[i - 1])
        {
            a.pb(temp[i]);
        }
    }
    while (m--)
    {
        cin >> x;
        ll pos = lower_bound(a.begin(), a.end(), x) - a.begin();
        cout << max(0LL, x - pos - 1) << "\n";
    }
}