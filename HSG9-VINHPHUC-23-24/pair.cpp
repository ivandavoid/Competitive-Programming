#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,k,res;
vector<bool> nt(1e7+5,1);

void sieve()
{
    nt[0]=nt[1]=0;
    for(int i=2; i<=sqrt(1e7); i++)
    {
        if(nt[i])
        {
            for(int j=i*i; j<=1e7; j+=i)
            {
                nt[j]=0;
            }
        }
    }
}

signed main()
{
    if(fopen("pair.inp","r"))
    {
        freopen("pair.inp","r",stdin);
        freopen("pair.out","w",stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sieve();
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        if(i+k>n){
            cout<<res<<"\n";
            return 0;
        }
        if(nt[i]&&nt[i+k])
        {
            res++;
        }
    }
}