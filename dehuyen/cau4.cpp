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

string s, res, tu;

signed main()
{
    if (fopen("cau4.inp", "r"))
    {
        freopen("cau4.inp", "r", stdin);
        freopen("cau4.out", "w", stdout);
    }
    ios;
    getline(cin, s);
    while (s[0] == ' ')
    {
        s.erase(0, 1);
    }
    stringstream ss(s);
    while (ss >> tu)
    {
        res += tu + ' ';
    }
    reverse(res.begin(), res.end());
    cout << res;
}