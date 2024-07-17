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

ll t, n, l, r;

signed main()
{
    if (fopen("Cau4.inp", "r"))
    {
        freopen("Cau4.inp", "r", stdin);
        freopen("Cau4.out", "w", stdout);
    }
    ios;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll a[n + 5];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            a[i] = a[i] * a[i];
        }
        sort(a + 1, a + n + 1);
        bool check = 0;
        for (int i = n; i >= 1; i--)
        {
            l = 1;
            r = i;
            while (l <= r)
            {
                if (a[l] + a[r] == a[i])
                {
                    check = 1;
                    break;
                }
                if (a[l] + a[r] < a[i])
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
            if (check)
            {
                break;
            }
        }
        check ? cout << "YES\n" : cout << "NO\n";
    }
}