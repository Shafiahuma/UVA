#include <bits/stdc++.h>
#define pi acos(-1)
using namespace std;
int main() {
    int t,i;
    double l,w,r,a1,a2;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>l;
        w=(3.0/5.0)*l;
        r=l/5.0;
        a1=(r*r)*pi;
        a2=(l*w)-a1;
        printf("%.2lf %.2lf\n",a1,a2);
    }
    return 0;
}