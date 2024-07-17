#include<bits/stdc++.h>
using namespace std;

int q,a,b;
vector<bool> nt(1e7+5,1);
int dem[10000005];

void sieve(){
    nt[0]=0;
    nt[1]=0;
    for(int i=2;i<=sqrt(1e7);i++){
        if(nt[i]){
            for(int j=i*i;j<=1e7;j+=i){
                nt[j]=0;
            }
        }
    }
}

signed main()
{
    if(fopen("CNTP.inp","r"))
    {
        freopen("CNTP.inp","r",stdin);
        freopen("CNTP.out","w",stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sieve();
    for(int i=2;i<=1e7;i++){
        if(nt[i]){
            dem[i]=dem[i-1]+1;
        }
        else{
            dem[i]=dem[i-1];
        }
    }
    cin>>q;
    while(q--){
        cin>>a>>b;
        cout<<dem[b]-dem[a-1]<<"\n";
    }
}
