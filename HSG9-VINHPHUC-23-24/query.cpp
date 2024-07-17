#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,k,p;
deque<int> d;
string t;

signed main()
{
    if(fopen("query.inp","r"))
    {
        freopen("query.inp","r",stdin);
        freopen("query.out","w",stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>k>>p;
    vector<int> a(n+1);
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(i<=k&&a[i]==1)
        {
            d.push_back(i);
        }
    }
    cin>>t;
    for(char c:t)
    {
        if(c=='!')
        {
            a.push_back(a[1]);
            a.erase(a.begin()+1);
            if(!d.empty() && d.front() == 1) d.pop_front();
            if(a[k] == 1) d.push_back(k);
            while(!d.empty() && d.front() <= n-k) d.pop_front();
        }
        else
        {
            cout<<d.size()<<"\n";
        }
    }
}
