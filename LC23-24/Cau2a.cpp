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

string s, x, res;

bool check(string x, string s)
{
    string res = "";
    while (res != s)
    {
        res += x;
        if (res.size() > s.size())
        {
            return 0;
        }
    }
    return 1;
}

signed main()
{
    if (fopen("Cau2a.inp", "r"))
    {
        freopen("Cau2a.inp", "r", stdin);
        freopen("Cau2a.out", "w", stdout);
    }
    ios;
    cin >> s;
    for (char c : s)
    {
        x += c;
        if (check(x, s))
        {
            cout << x;
            return 0;
        }
    }
}