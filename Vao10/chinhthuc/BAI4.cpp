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

ll n, k, x;
unordered_map<ll, ll> cnt;

string its(ll n)
{
    ostringstream s1;
    s1 << n;
    return s1.str();
}

bool check(ll n)
{
    string s = its(n);
    if (s.length() <= 1)
    {
        return 0;
    }
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] <= s[i - 1])
        {
            return 0;
        }
    }
    return 1;
}

signed main()
{
    if (fopen("BAI4.inp", "r"))
    {
        freopen("BAI4.inp", "r", stdin);
        freopen("BAI4.out", "w", stdout);
    }
    ios;
    cin >> n >> k;
    while (n--)
    {
        cin >> x;
        cnt[x]++;
    }
    bool ok = 0;
    while (k--)
    {
        cin >> x;
        if (check(cnt[x]))
        {
            ok = 1;
            cout << x << " " << cnt[x] << "\n";
        }
    }
    if (!ok)
        cout << 0 << " " << 0;
}