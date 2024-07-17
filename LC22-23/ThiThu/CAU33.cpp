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

ll n, a[1000006], m, res;

signed main()
{
    if (fopen("CAU33.inp", "r"))
    {
        freopen("CAU33.inp", "r", stdin);
        freopen("CAU33.out", "w", stdout);
    }
    ios;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll s = 0, d = 1;
    for (int c = 1; c <= n; ++c)
    {
        s += a[c];
        while (s >= m && d <= c)
        {
            res += (n - c + 1);
            s -= a[d];
            ++d;
        }
    }
    cout << res;
}