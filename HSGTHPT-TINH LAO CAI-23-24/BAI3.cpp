#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,x,tong[1000007];

void sieve()
{
    tong[0]=tong[1]=0;
    for(int i=1; i<=1e6; i++)
    {
        for(int j=2*i; j<=1e6; j+=i)
        {
            tong[j]+=i;
        }
    }
}

signed main()
{
    if(fopen("BAI3.inp","r"))
    {
        freopen("BAI3.inp","r",stdin);
        freopen("BAI3.out","w",stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sieve();
    cin>>n;
    while(n--)
    {
        cin>>x;
        if(tong[x]>=x)
        {
            cout<<1<<"\n";
        }
        else
        {
            cout<<0<<"\n";
        }
    }
}
