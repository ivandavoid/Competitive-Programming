#include<bits/stdc++.h>
#define int long long
using namespace std;

int res,x;
string s;

bool ktnt(int n){
    if(n<=1) return 0;
    if(n<=3) return 1;
    if(n%2==0||n%3==0) return 0;
    for(int i=5;i<=sqrt(n);i+=6){
        if(n%i==0||n%(i+2)==0)
            return 0;
    }
    return 1;
}

signed main()
{
    if(fopen("BAI2.inp","r"))
    {
        freopen("BAI2.inp","r",stdin);
        freopen("BAI2.out","w",stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>s;
    for(char c:s){
        if(c>='0'&&c<='9'){
            x=x*10+(c-'0');
        }
        else{
            if(x!=0){
                if(ktnt(x)&&x>res){
                    res=x;
                }
                x=0;
            }
        }
    }
    if(x!=0) {
        if(ktnt(x)&&x>res){
            res=x;
        }
    }
    cout<<res;
}
