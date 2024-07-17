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

ll len, pos, cnt[300];
string s;

signed main()
{
    if (fopen("BAI3.inp", "r"))
    {
        freopen("BAI3.inp", "r", stdin);
        freopen("BAI3.out", "w", stdout);
    }
    ios;
    cin >> s;
    ll n = s.size();
    s = " " + s;
    ll j = 0;
    for (int i = 1; i < s.size(); i++)
    {
        while (j < n && cnt[s[j + 1]] < 1)
        {
            j++;
            cnt[s[j]]++;
        }
        if (j - i + 1 > len && j <= n)
        {
            len = j - i + 1;
            pos = i;
        }
        cnt[s[i]]--;
    }
    cout << pos << " " << len;
}