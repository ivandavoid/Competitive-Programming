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

ll da[1000005], dA[1000003], d0[1000002], res, l;
string s;

signed main()
{
    if (fopen("PASSWORD.inp", "r"))
    {
        freopen("PASSWORD.inp", "r", stdin);
        freopen("PASSWORD.out", "w", stdout);
    }
    ios;
    cin >> s;
    if (s.size() < 5)
        cout << 0;
    else
    {
        for (int i = 1; i <= s.size(); i++)
        {
            da[i] = da[i - 1];
            dA[i] = dA[i - 1];
            d0[i] = d0[i - 1];
            if (s[i - 1] >= 'a' && s[i - 1] <= 'z')
                da[i]++;
            if (s[i - 1] >= 'A' && s[i - 1] <= 'Z')
                dA[i]++;
            if (s[i - 1] >= '0' && s[i - 1] <= '9')
                d0[i]++;
        }
        for (int i = 6; i <= s.size(); i++)
        {
            int x = da[i] - da[l], y = dA[i] - dA[l], z = d0[i] - d0[l];
            while (x && y && z && (i - l) >= 6)
            {
                l++;
                x = da[i] - da[l], y = dA[i] - dA[l], z = d0[i] - d0[l];
            }
            res += l;
        }
        cout << res;
    }
}