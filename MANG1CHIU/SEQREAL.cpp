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

ll n;
double x, t, ta, td, tc, tl;

signed main()
{
    if (fopen("SEQREAL.inp", "r"))
    {
        freopen("SEQREAL.inp", "r", stdin);
        freopen("SEQREAL.out", "w", stdout);
    }
    ios;
    cin >> n;
    double moi = 0.00;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        t += x;
        if (x < 0)
        {
            ta += x;
        }
        if (x > 0)
        {
            td += x;
        }
        if (i % 2 == 0)
        {
            tc += x;
        }
        if (i % 2 == 1)
        {
            tl += x;
        }
    }
    cout << setprecision(2) << fixed << t << " " << ta << " " << td << " " << tc << " " << tl;
}