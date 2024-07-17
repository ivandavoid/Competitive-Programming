#include<bits/stdc++.h>
#define int long long
using namespace std;

int q,a,b,s[1000006];
vector<bool> nt(1e6+5,1);

void sieve(){
    nt[0]=0;
    nt[1]=0;
    for(int i=2;i<=sqrt(1e6);i++){
        if(nt[i]){
            for(int j=i*i;j<=1e6;j+=i){
                nt[j]=0;
            }
        }
    }
}

signed main()
{
    if(fopen("SUMP.inp","r"))
    {
        freopen("SUMP.inp","r",stdin);
        freopen("SUMP.out","w",stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    sieve();
    for(int i=2;i<=1e6;i++){
        if(nt[i]){
            s[i]=s[i-1]+i;
        }
        else{
            s[i]=s[i-1];
        }
    }
    cin>>q;
    while(q--){
        cin>>a>>b;
        cout<<s[b]-s[a-1]<<"\n";
    }
}
