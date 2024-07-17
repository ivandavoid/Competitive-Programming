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

str s;
int t, n;

bool check(string s)
{
    int n = s.size() - 1;
    for (int i = 0; i <= n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            return 0;
        }
    }
    return 1;
}

signed main()
{
    if (fopen("name.inp", "r"))
    {
        freopen("name.inp", "r", stdin);
        freopen("name.out", "w", stdout);
    }
    ios;
    cin >> n;
    cin >> s;
    cin >> t;
    while (t--)
    {
        int x, y;
        x--;
        y--;
        if (check(s.substr(x, y - x + 1)))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}