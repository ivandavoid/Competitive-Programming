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

string s;
map<string, ll> cnt;
ll res;

signed main()
{
    if (fopen("CAU3.inp", "r"))
    {
        freopen("CAU3.inp", "r", stdin);
        freopen("CAU3.out", "w", stdout);
    }
    ios;
    while (cin >> s)
    {
        for (int i = 0; i < s.sz; i++)
        {
            if (isupper(s[i]))
            {
                s[i] = tolower(s[i]);
            }
        }
        cnt[s]++;
    }
    for (auto i : cnt)
    {
        res = max(res, i.se);
    }
    cout << res;
}