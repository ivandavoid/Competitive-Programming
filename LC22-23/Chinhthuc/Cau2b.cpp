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

string s;
ll n;

bool check(string s)
{
    if (s.size() < 8)
    {
        return 0;
    }
    bool cs = 0, ch = 0, ct = 0, db = 0;
    for (char c : s)
    {
        if (c >= 'A' && c <= 'Z')
        {
            ch = 1;
        }
        else if (c >= '0' && c <= '9')
        {
            cs = 1;
        }
        else if (c >= 'a' && c <= 'z')
        {
            ct = 1;
        }
        else
        {
            db = 1;
        }
    }
    return (cs && ch && ct && db);
}

signed main()
{
    if (fopen("Cau2b.inp", "r"))
    {
        freopen("Cau2b.inp", "r", stdin);
        freopen("Cau2b.out", "w", stdout);
    }
    ios;
    cin >> n;
    while (n--)
    {
        cin >> s;
        check(s) ? cout << "Yes\n" : cout << "No\n";
    }
}