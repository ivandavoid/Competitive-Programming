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

ll cntc, cntt;
string s;

bool check(ll n, string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+')
        {
            n += 1;
        }
        else if (s[i] == '-')
        {
            n -= 1;
        }
        else
        {
            n = n;
        }
        if (n > 9 || n < 0)
        {
            return 0;
        }
    }
    return 1;
}

void solve(ll x)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+')
        {
            x += 1;
            cout << x;
        }
        else if (s[i] == '-')
        {
            x -= 1;
            cout << x;
        }
        else
        {
            cout << x;
        }
    }
}

signed main()
{
    if (fopen("CAU2.inp", "r"))
    {
        freopen("CAU2.inp", "r", stdin);
        freopen("CAU2.out", "w", stdout);
    }
    ios;
    cin >> s;
    for (int x = 1; x <= 9; x++)
    {
        if (check(x, s))
        {
            cout << x;
            solve(x);
            return 0;
        }
    }
    cout << 0;
}