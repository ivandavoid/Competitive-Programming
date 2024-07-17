#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,a[1000006],x,res;
map<int,int> cnt;

signed main(){
    if(fopen("GoodArray.inp","r")){
        freopen("GoodArray.inp","r",stdin);
        freopen("GoodArray.out","w",stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        a[i]=a[i-1]+x;
    }
    cnt[0]=1;
    for(int i=1;i<=n;i++){
        res+=cnt[a[i]-i];
        cnt[a[i]-i]++;
    }
    cout<<res;
}
