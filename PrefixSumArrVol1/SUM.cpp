#include<bits/stdc++.h>
using namespace std;

int q,a,b,dem[1000006],n,x;

signed main()
{
    if(fopen("SUM.inp","r"))
    {
        freopen("SUM.inp","r",stdin);
        freopen("SUM.out","w",stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>q;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(x%2==0){
            dem[i]=dem[i-1]+1;
        }
        else{
            dem[i]=dem[i-1];
        }
    }
    while(q--){
        cin>>a>>b;
        cout<<dem[b]-dem[a-1]<<"\n";
    }
}
