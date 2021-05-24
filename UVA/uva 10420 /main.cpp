#include <bits/stdc++.h>
using namespace std;
int main() {
   int t,i,n;
   cin>>t;
   for(i=0;i<t;i++)
   {
       cin>>n;
       int j;
       double a[n+1],sum=0;
       for(j=0;j<n;j++)
       {
           cin>>a[j];
           sum=sum+a[j];
       }
       double avg=sum/n;
       int count=0;
       sort(a,a+n);
       for(j=n-1;j>=0;j--)
       {
           if(a[j]>avg)
               count++;
       }
       double temp=((double)count/n)*100.0;
       printf("%.3lf%%\n",temp);
   }
    return 0;
}