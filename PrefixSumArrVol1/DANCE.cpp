#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,res,t[1000006];
map<int,int> d;
string s;

signed main()
{
    if(fopen("DANCE.inp","r"))
    {
        freopen("DANCE.inp","r",stdin);
        freopen("DANCE.out","w",stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    cin>>s;
    d[0]=1;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='a')
            t[i+1]=t[i]+1;
        else
            t[i+1]=t[i]-1;
        res+=d[t[i+1]];
        d[t[i+1]]++;
    }
    cout<<res;
}
