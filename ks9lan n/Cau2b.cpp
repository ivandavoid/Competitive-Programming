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

string itos(ll n)
{
    ostringstream tmp;
    tmp << n;
    string res = tmp.str();
    return res;
}

string solve(const string &s)
{
    ll n = s.length();
    string res = "";
    for (ll i = 0; i < n; i++)
    {
        char cur = s[i];
        ll cnt = 1;
        while (i + 1 < n && s[i + 1] == cur)
        {
            cnt++;
            i++;
        }
        res += cur;
        if (cnt > 1)
        {
            res += itos(cnt);
        }
    }
    return res;
}

signed main()
{
    if (fopen("Cau2b.inp", "r"))
    {
        freopen("Cau2b.inp", "r", stdin);
        freopen("Cau2b.out", "w", stdout);
    }
    ios;
    cin >> s;
    cout << solve(s);
}