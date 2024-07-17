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

ll n, a[100005], minn[100005], maxx[100005], res;
unordered_map<ll, ll> cnt;

void sub12()
{
    for (int i = 1; i <= n; i++)
    {
        ll minn = a[i];
        ll maxx = a[i];
        for (int j = i; j <= n; j++)
        {
            minn = min(minn, a[j]);
            maxx = max(maxx, a[j]);
            ll x = maxx - minn;
            if (x % 2 == 0)
            {
                res++;
            }
        }
    }
    cout << res;
}

void subac(){

    
}

signed main()
{
    if (fopen("Cau5.inp", "r"))
    {
        freopen("Cau5.inp", "r", stdin);
        freopen("Cau5.out", "w", stdout);
    }
    ios;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    if (n <= 1e4)
    {
        sub12();
    }
    else{
        subac();
    }
}