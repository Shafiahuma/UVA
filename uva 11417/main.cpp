#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,i,j;
    while(scanf("%d",&n)==1)
    {
        int G=0;
        if(n==0)
            break;
        for(i=1;i<n;i++)
            for(j=i+1;j<=n;j++)
            {
                G+=__gcd(i,j);
            }
        cout<<G<<endl;
    }
    return 0;
}