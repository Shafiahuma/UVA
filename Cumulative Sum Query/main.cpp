#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,q,i,j,a[100005],b[100005],p,l,h,sum=0;
    cin>>n;
    for(i=0;i<n;i++) {
        cin >> a[i];
        sum=sum+a[i];
        b[i]=sum;
    }
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>l>>h;
        cout<<b[h]-b[l-1]<<endl;
    }
    return 0;
}