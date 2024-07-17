#include<bits/stdc++.h>
#define int long long
using namespace std;

int t,n;

bool check(int n){
    int x=sqrt(n);
    return (x*x==n);
}

signed main()
{
    if(fopen("BAI1.inp","r"))
    {
        freopen("BAI1.inp","r",stdin);
        freopen("BAI1.out","w",stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>t;
    while(t--){
        cin>>n;
        if(check(n)){
            cout<<"LE"<<"\n";
        }
        else{
            cout<<"CHAN"<<"\n";
        }
    }
}