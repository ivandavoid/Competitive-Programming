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

int n, k, h[1005], dp[500][500], prx[1005], m[405][405], cost[405][405];

int cal(int pos)
{
    int maxL = *max_element(h + 1, h + pos + 1);
    int costL = pos * maxL - prx[pos];
    int maxR = *max_element(h + pos + 1, h + n + 1);
    int costR = maxR * (n - pos) - prx[n] + prx[pos];
    return costL + costR;
}

void sub1()
{
    int res = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        res = min(res, cal(i));
    }
    cout << res;
}

void make_max_forsubacc()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            m[i][j] = max(m[i][j - 1], h[j]);
        }
    }
}

void make_cost_forsubacc()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cost[i][j] = max(i, j) * (j - i + 1) - prx[j] + prx[i - 1];
        }
    }
}

void subacc()
{
    make_max_forsubacc();
    make_cost_forsubacc();
    memset(dp, 0x3f3f, sizeof(dp));
    for (int i = 1; i <= n; i++)
    {
        dp[i][0] = cost[1][i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            for (int x = 1; x <= i; x++)
            {
                dp[i][j] = min(dp[i][j], dp[x][j - 1] + cost[x + 1][i]);
            }
        }
    }
    cout << dp[n][k];
}

signed main()
{
    if (fopen("FLYCAR.inp", "r"))
    {
        freopen("FLYCAR.inp", "r", stdin);
        freopen("FLYCAR.out", "w", stdout);
    }
    ios;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];
        prx[i] = prx[i - 1] + h[i];
    }
    subacc();
}
