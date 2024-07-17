#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[1000006];
bool ktnt(int n) {
   if(n<2)
      return 0;
   for(int i=2; i<=sqrt(n); i++)
      if(n%2==0)
         return 0;
   return 1;
}
void phantich(int n) {
   for(int i=2; i<=sqrt(n); i++)
      while(n%i==0) {
         a[i]=1;
         n=n/i;
      }
   if(n>1)
      a[n]=1;
}
main() {
   int n,t;
//   freopen("chonso.inp","r",stdin);
//   freopen("chonso.out","w",stdout);
   cin>>n;
   if(ktnt(n)) {
      cout<<n;
      return 0;
   }
   phantich(n);
   int res=1;
   for(int i=1; i<=sqrt(n); i++)
      if(a[i]!=0)
         res*=i;
   cout<<res;
}
