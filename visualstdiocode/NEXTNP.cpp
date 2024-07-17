#include <bits/stdc++.h>
#define pb push_back
#define pp pop_back
#define lb lower_bound
#define ub upper_bound
#define fi first
#define se second
#define ll long long
#define ull unsigned long long
#define str string
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vii vector<int>
#define vll vector<long long>
#define mpii map<int, int>
#define mpsi map<string, int>
using namespace std;

str s;
int pos = -1;

signed main()
{
    if (fopen("name.inp", "r"))
    {
        freopen("name.inp", "r", stdin);
        freopen("name.out", "w", stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> s;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == '0')
        {
            pos = i;
            break;
        }
    }
    if (pos == -1)
    {
        cout << 1;
        for (int i = 0; i < s.size(); i++)
        {
            cout << 0;
        }
    }
    else
    {
        s[pos] = '1';
        for (int i = pos + 1; i < s.size(); i++)
        {
            s[i] = '0';
        }
        cout << s;
    }
}