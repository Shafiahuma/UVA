#include <bits/stdc++.h>
#define ll long long int
#define debug cout<<"it's me"<<endl
using namespace std;
int main() {
   int t,i,j=0,n,sum=0,min;
   cin>>t>>n;
  int a[t+1];
  min=INT16_MAX;
  cout<<min<<endl;
  for(i=0;i<t;i++)
  {
      cin>>a[i];
      j++;
      if(j>n) {
          j = 0;
          sum = 0;
      }
      if(j<=n)
      {
         sum=sum+a[i];
         if(sum<min)
             min=sum;
      }
  }
  cout<<
    return 0;
}