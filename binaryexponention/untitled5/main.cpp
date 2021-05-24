#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
   ll n,i,j;
   cin>>n;
   ll a[n+1];
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   ll x=0,y=1,count=1;
   while(x<n && y<n)
   {
     while(a[y]-a[x]>=2 && y<n && x<n) {
         count++;
         x++;
         y++;
     }
     while(count>=2)
     {
         cout<<count<<endl;
         count--;
     }
     if(count==1)
        cout<<"0"<<endl;
     count=1;
     if(y==n-1 && a[y]-a[x]<2)
         cout<<"0"<<endl;
     x++;
     y++;
   }
    return 0;
}
