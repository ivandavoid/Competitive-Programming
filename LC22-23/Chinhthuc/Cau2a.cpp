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

ll res;
char c;
map<char, ll> cnt;

signed main()
{
    if (fopen("Cau2a.inp", "r"))
    {
        freopen("Cau2a.inp", "r", stdin);
        freopen("Cau2a.out", "w", stdout);
    }
    ios;
    while (cin >> c)
    {
        cnt[c]++;
        if (cnt[c] == 1)
        {
            res++;
        }
    }
    cout << res << "\n";
    for (int i = 0; i <= 300; i++)
    {
        if (cnt[char(i)] > 0)
        {
            cout << char(i) << " " << cnt[char(i)] << '\n';
        }
    }
}