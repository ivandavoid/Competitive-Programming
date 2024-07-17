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

int n, temp, res;

int cal(int n)
{
    int res = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            res *= i;
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    return res * n;
}

signed main()
{
    if (fopen("bai2.inp", "r"))
    {
        freopen("bai2.inp", "r", stdin);
        freopen("bai2.out", "w", stdout);
    }
    ios;
    cin >> n;
    for (int i = n; i >= max(1, n - 200); i--)
    {
        res = max(res, cal(i));
    }
    cout<<res;
}