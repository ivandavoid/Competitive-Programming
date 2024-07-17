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
const int MOD = 1e9;
using namespace std;

string s, res = "";
ll n, k;

ll x(ll n)
{
    return n * n % MOD;
}

ll POW(ll a, ll n)

{
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return a;
    }
    if (n % 2 == 0)
    {
        return x(POW(a, n / 2));
    }
    else
    {
        return x(POW(a, n / 2)) * a % MOD;
    }
}

signed main()
{
    if (fopen("BIENDOI.inp", "r"))
    {
        freopen("BIENDOI.inp", "r", stdin);
        freopen("BIENDOI.out", "w", stdout);
    }
    ios;
    cin >> s;
    cin >> n >> k;
    ll cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        cnt += POW(s[i] - '0', n);
        if (cnt >= k)
        {
            cout << s[i];
            return 0;
        }
    }
}
