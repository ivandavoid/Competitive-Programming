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

ll m, n, k, x, res, MAX = INT_MIN, cnt[10000007];

signed main()
{
    if (fopen("BAI04.inp", "r"))
    {
        freopen("BAI04.inp", "r", stdin);
        freopen("BAI04.out", "w", stdout);
    }
    ios;
    cin >> m >> n >> k;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> x;
            MAX = max(MAX, x);
            cnt[x]++;
        }
    }
    sort(cnt, cnt + MAX + 10, greater<int>());
    ll i = 0;
    while (k--)
    {
        res += cnt[i];
        i++;
    }
    cout << res;
}