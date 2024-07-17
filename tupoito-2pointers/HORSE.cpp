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

ll n, res = 0, a[100005], b[100005], j = 1;

signed main()
{
    if (fopen("HORSE.inp", "r"))
    {
        freopen("HORSE.inp", "r", stdin);
        freopen("HORSE.out", "w", stdout);
    }
    ios;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    sort(a + 1, a + 1 + n);
    sort(b + 1, b + 1 + n);
    ll i = n, j = n;
    while (i >= 1 && j >= 1)
    {
        if (a[i] > b[j])
        {
            res++;
            i--;
            j--;
        }
        else
        {
            j--;
        }
    }
    cout << res;
}