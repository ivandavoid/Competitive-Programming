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

ll n, m, a[100005], prx[100005], k;

signed main()
{
    if (fopen("Cau4.inp", "r"))
    {
        freopen("Cau4.inp", "r", stdin);
        freopen("Cau4.out", "w", stdout);
    }
    ios;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    for (int i = 1; i <= n; i++)
    {
        prx[i] = a[i] + prx[i - 1];
    }
    while (m--)
    {
        cin >> k;
        ll pos = lower_bound(a + 1, a + n + 1, k) - a;
        cout << ((pos - 1) * k - prx[pos - 1]) + (prx[n] - prx[pos - 1] - (n - pos + 1) * k);
        cout << " ";
    }
}
