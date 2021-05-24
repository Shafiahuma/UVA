#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,n,k,i,j,sum,p,q;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>k;
        sum=0;
        if(1%k!=0)
            sum=sum+1;
        if(n%k!=0)
            sum=sum+n;
        for(j=2;j<=sqrt(n);j++)
        {
            if(n%j==0) {
                p = j;
                q = n / j;
                if (p % k != 0)
                    sum = sum + p;
                if (p != q) {
                    if (q % k != 0)
                        sum = sum + q;
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
