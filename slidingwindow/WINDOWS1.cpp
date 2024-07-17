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

ll n, k, a[100005];

void subtrau()
{
    ll res;
    for (int i = 1; i <= n - k + 1; i++)
    {
        res = a[i];
        for (int j = 1; j < k; j++)
        {
            if (i + j <= n)
            {
                if (a[i + j] > res)
                {
                    res = a[i + j];
                }
            }
        }
        cout << res << " ";
    }
}

void usingpriorityqueue()
{
    priority_queue<pair<int, int>> pq;
    vector<int> res;
    for (int i = 1; i <= k + 1; i++)
    {
        pq.push({a[i], i});
    }
    res.pb(pq.top().first);
    for (int i = k + 1; i <= n; i++)
    {
        pq.push({a[i], i});
        while (pq.top().second <= i - k)
        {
            pq.pop();
        }
        res.pb(pq.top().first);
    }
    for (auto i : res)
    {
        cout << i << " ";
    }
}

void usingmultiset()
{
    multiset<int> st;
    for (int i = 1; i <= k; i++)
    {
        st.insert(a[i]);
    }
    cout << *st.rbegin() << " ";
    for (int i = k + 1; i <= n; i++)
    {
        st.insert(a[i]);
        st.erase(st.find(a[i - k]));
        cout << *st.rbegin() << " ";
    }
}

signed main()
{
    if (fopen("WINDOWS1.inp", "r"))
    {
        freopen("WINDOWS1.inp", "r", stdin);
        freopen("WINDOWS1.out", "w", stdout);
    }
    ios;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
}