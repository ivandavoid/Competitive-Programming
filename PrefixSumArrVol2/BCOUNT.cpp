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

ll n, q, x, c1[1000006], c2[1000006], c3[1000006], l, r;

signed main()
{
    if (fopen("BCOUNT.inp", "r"))
    {
        freopen("BCOUNT.inp", "r", stdin);
        freopen("BCOUNT.out", "w", stdout);
    }
    ios;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        c1[i] = c1[i - 1] + (x == 1);
        c2[i] = c2[i - 1] + (x == 2);
        c3[i] = c3[i - 1] + (x == 3);
    }
    while (q--)
    {
        cin >> l >> r;
        cout << c1[r] - c1[l - 1] << " " << c2[r] - c2[l - 1] << " " << c3[r] - c3[l - 1] << "\n";
    }
}
