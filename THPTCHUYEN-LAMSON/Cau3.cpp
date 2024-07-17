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

ll n, a[200005], res;
unordered_map<ll, ll> cnt;

void sub12()
{
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i] = a[i] * a[i];
        cnt[a[i]]++;
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            res += cnt[a[i] + a[j]];
        }
    }
    cout << res;
}

void sub34()
{
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i] = a[i] * a[i];
    }
    sort(a + 1, a + n + 1);
    vector<int> b, dem;
    int cnt = 1;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != a[i + 1])
        {
            b.push_back(a[i]);
            dem.push_back(cnt);
            cnt = 1;
        }
        else
            cnt++;
    }
    for (int i = 0; i < b.size(); i++)
    {
        int c = i + 1;
        for (int j = i + 1; j < b.size(); j++)
        {
            while (b[i] + b[j] > b[c] && c < b.size())
                c++;
            if (b[i] + b[j] == b[c])
                res = res + dem[i] * dem[j] * dem[c];
        }
    }
    cout << res;
}

signed main()
{
    if (fopen("Cau3.inp", "r"))
    {
        freopen("Cau3.inp", "r", stdin);
        freopen("Cau3.out", "w", stdout);
    }
    ios;
    cin >> n;
    if (n <= 1e3)
    {
        sub12();
    }
    else
    {
        sub34();
    }
}