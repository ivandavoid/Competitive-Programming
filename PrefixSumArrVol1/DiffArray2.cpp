#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,a[1000006],q,l,r,x,prx[1000006];

signed main()
{
    if(fopen("DiffArray2.inp","r"))
    {
        freopen("DiffArray2.inp","r",stdin);
        freopen("DiffArray2.out","w",stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>q;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        prx[i]=a[i]-a[i-1];
    }
    for(int i=1; i<=q; i++)
    {
        cin>>l>>r>>x;
        prx[l]+=x;
        prx[r+1]-=x;
    }
    for(int i=1; i<=n; i++)
    {
        prx[i]+=prx[i-1];
    }
    for(int i=1; i<=n; i++)
    {
        cout<<prx[i]<<" ";
    }
}
