#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
   int t,i=0;
   while(scanf("%d",&t)==1)
   {
       ll sum=1,count=0;
       if(t<0)
           break;
       while(sum<t)
       {
           sum=sum+sum;
           count++;
       }
       i++;
       cout<<count<<endl;
   }
    return 0;
}