#include<bits/stdc++.h>
#define int long long
const int MOD=14062008;
using namespace std;

int n,k,f[100005],a[100005];

signed main()
{
    if(fopen("ladder.inp","r"))
    {
        freopen("ladder.inp","r",stdin);
        freopen("ladder.out","w",stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>k;
    for(int i=1;i<=k;i++){
        int x;
        cin>>x;
        a[x]=1;
    }
    f[1]=1;
    for(int i=2;i<=n;i++){
        f[i]=(f[i-1]+f[i-2])%MOD;
        if(a[i]==1){
            f[i]=0;
        }
    }
    cout<<f[n];
}
