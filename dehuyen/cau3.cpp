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

ll n, a[100005], b[100005];
map<ll, ll> mapp;

signed main()
{
    if (fopen("cau3.inp", "r"))
    {
        freopen("cau3.inp", "r", stdin);
        freopen("cau3.out", "w", stdout);
    }
    ios;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b + 1, b + n + 1);
    for (ll i = 1; i <= n; i++)
    {
        if (b[i] != b[i - 1])
            mapp[b[i]] = i - 1;
    }
    for (ll i = 1; i <= n; i++)
    {
        cout << mapp[a[i]] << " ";
    }
}