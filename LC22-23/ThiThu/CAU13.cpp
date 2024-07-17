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

ll a, b, c, d, res = 1;
map<ll, ll> cnt;

void pt(ll n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                cnt[i]++;
                n /= i;
            }
        }
    }
    if (n > 1)
        cnt[n]++;
}

signed main()
{
    if (fopen("CAU13.inp", "r"))
    {
        freopen("CAU13.inp", "r", stdin);
        freopen("CAU13.out", "w", stdout);
    }
    ios;
    cin >> a >> b >> c >> d;
    pt(a);
    pt(b);
    pt(c);
    pt(d);
    for (auto i : cnt)
    {
        res *= (i.se + 1);
    }
    cout << res;
}