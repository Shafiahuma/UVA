#include <bits/stdc++.h>
using namespace std;
int main() {
    int i=1,n;
    double a,b,c,p,q;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        cin>>a>>b>>c;
        if(n==1)
        {
            q=(b-a)/c;
            p=(a*c)+(.5*q*c*c);
        }
        else if(n==2)
        {
            q=(b-a)/c;
            p=(a*q)+(.5*c*q*q);
        }
        else if(n==3)
        {
            p=sqrt((a*a)+2*b*c);
            q=(p-a)/b;
        }
        else if(n==4)
        {
            p=sqrt((a*a)-2*b*c);
            q=(a-p)/b;
        }
        printf("Case %d: %.3f %.3f\n",i,p,q);
        i++;
    }
    return 0;
}