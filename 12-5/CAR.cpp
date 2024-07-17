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

struct tron
{
    ll f, t, idx;
};

ll n, s, res;
tron a[100006];

bool cmp(tron u, tron v)
{
    return (ll)u.f * v.t - (ll)u.t * v.f > 0;
}

signed main()
{
    if (fopen("CAR.inp", "r"))
    {
        freopen("CAR.inp", "r", stdin);
        freopen("CAR.out", "w", stdout);
    }
    ios;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].f;
        s += a[i].f;
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].t;
        a[i].idx = i;
    }
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; i++)
    {
        res += s * a[i].t;
        s -= a[i].f;
    }
    cout << res << "\n";
    for (int i = 1; i <= n; i++)
    {
        cout << a[i].idx << " ";
    }
}