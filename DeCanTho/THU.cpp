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

ll n, i;
string s, sss = "", word, res;

signed main()
{
    if (fopen("THU.inp", "r"))
    {
        freopen("THU.inp", "r", stdin);
        freopen("THU.out", "w", stdout);
    }
    ios;
    cin >> n;
    cin.ignore();
    cin >> s;
    for (i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            while (!isdigit(s[i + 1]) && i + 1 < n)
            {
                cout << s[i + 1];
                i++;
            }
            cout << " ";
        }
        else if (s[i] == '2')
        {
            while (!isdigit(s[i + 1]) && i + 1 < n)
            {
                sss += s[i + 1];
                i++;
            }
            reverse(sss.begin(), sss.end());
            cout << sss << " ";
            sss = "";
        }
    }
}