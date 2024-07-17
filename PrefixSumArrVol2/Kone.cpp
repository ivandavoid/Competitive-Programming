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

ll k, prx[1000006], res;
string s;
unordered_map<ll, ll> cnt;

signed main()
{
    if (fopen("Kone.inp", "r"))
    {
        freopen("Kone.inp", "r", stdin);
        freopen("Kone.out", "w", stdout);
    }
    ios;
    cin >> k >> s;
    for (int i = 0; i < s.size(); i++)
    {
        prx[i + 1] = prx[i] + (s[i] == '1');
    }
    for (int i = 0; i <= s.size(); i++)
    {
        if (prx[i] >= k)
        {
            res += cnt[prx[i] - k];
        }
        cnt[prx[i]]++;
    }
    cout << res;
}