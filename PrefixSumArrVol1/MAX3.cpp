#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,a[1000006],maxx[1000006],minn[1000006],res=INT_MIN;

signed main() {
    if(fopen("MAX3.inp","r")){
    freopen("MAX3.inp", "r", stdin);
    freopen("MAX3.out", "w", stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;i++) {
        cin>>a[i];
        if(i>1) {
            maxx[i]=max(maxx[i-1],a[i-1]);
        }else{
            maxx[i]=a[i];
        }
    }
    minn[n]=a[n];
    for(int i=n-1;i>=1;i--) {
        minn[i]=min(minn[i+1],a[i]);
    }
    for(int j=2;j<n;j++) {
        res=max(res,a[j]+maxx[j]-minn[j+1]);
    }
    cout<<res;
}
