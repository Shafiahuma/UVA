#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,n,i,j,sum;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        int a[n+1];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        sort(a,a+n);
        int avg=(a[0]+a[n-1])/2;
        sum=(a[n-1]-avg)+(avg-a[0]);
        for(j=n-1;j>0;j--)
        {
            sum=sum+a[j]-a[j-1];
        }
        cout<<sum<<endl;
    }
    return 0;
}
