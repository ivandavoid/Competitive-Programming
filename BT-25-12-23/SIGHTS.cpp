#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,a[1000006],b[1000006],c[1000006],res;

signed main(){
    if(fopen("SIGHTS.inp","r")){
        freopen("SIGHTS.inp","r",stdin);
        freopen("SIGHTS.out","w",stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(i>1){
            b[i]=max(b[i-1],a[i]+i);
        }
        else{
            b[i]=a[i]+i;
        }
    }
    c[n]=a[n]-n;
    for(int i=n-1;i>=0;i--){
        c[i]=max(c[i+1],a[i]-i);
    }
    for(int i=2;i<=n-1;i++){
        res=max(res,b[i-1]+a[i]+c[i+1]);
    }
    cout<<res;
}
