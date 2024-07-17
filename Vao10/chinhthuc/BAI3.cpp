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

ll n, m, a[1000006], b[1000006], res;

signed main()
{
    if (fopen("BAI3.inp", "r"))
    {
        freopen("BAI3.inp", "r", stdin);
        freopen("BAI3.out", "w", stdout);
    }
    ios;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++)
        cin >> b[i];
    sort(a + 1, a + n + 1);
    sort(b + 1, b + m + 1);
    ll i = 1, j = 1;
    while (i <= n && j <= m)
    {
        if (a[i] > b[j] && a[i] != 0 && b[j] != 0)
        {
            res++;
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }
    cout << res;
}