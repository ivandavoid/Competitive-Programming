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

ll n, res;
string s;
unordered_map<ll, ll> cnt;

signed main()
{
    if (fopen("CAU5.inp", "r"))
    {
        freopen("CAU5.inp", "r", stdin);
        freopen("CAU5.out", "w", stdout);
    }
    ios;
    cin >> n;
    while (n--)
    {
        cin >> s;
        ll d = 0;
        for (char c : s)
        {
            if (c == 'X')
            {
                d++;
            }
        }
        cnt[d]++;
        res = max(res, d);
    }
    cout << cnt[res] << " " << res;
}