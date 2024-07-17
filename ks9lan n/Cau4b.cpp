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

ll n, k, x, res;
unordered_map<ll, ll> cnt;

signed main()
{
    if (fopen("Cau4b.inp", "r"))
    {
        freopen("Cau4b.inp", "r", stdin);
        freopen("Cau4b.out", "w", stdout);
    }
    ios;
    cin >> n >> k;
    for (ll i = 1; i <= n; i++)
    {
        cin >> x;
        cnt[(x % k + k) % k]++;
    }
    if (k % 2 == 0)
    {
        res += (cnt[k / 2] / 2) + cnt[k / 2] / 2;
        cnt[k / 2] = 0;
    }
    res += cnt[0] * (cnt[0] - 1) / 2;
    for (ll i = 1; i <= k / 2; i++)
    {
        res += min(cnt[i], cnt[k - i]);
        cnt[i] = cnt[k - i] = 0;
    }
    cout << res;
}