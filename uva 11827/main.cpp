#include <bits/stdc++.h>
using namespace std;
int main() {
   long long int n,i,j=0,k,l;
   cin>>n;
   cin.ignore();
   long long int a[100001],max,temp;
   for(i=0;i<n;i++)
   {
       j=0;
       max=0;
       string s;
       getline(cin,s);
       stringstream s1(s);
       while(s1>>a[j])
           j++;
       for(k=0;k<j-1;k++)
       {
           for(l=k+1;l<j;l++)
           {
               temp=__gcd(a[k],a[l]);
               if(max<temp)
               max=temp;
           }
       }
       cout<<max<<endl;
   }
    return 0;
}