#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,i;
    double d,u,v;
    cin>>n;
    for(i=0;i<n;i++) {
        cin >> d >> v >> u;
        if (u != 0 && v != 0 && u>v)
        {
            double temp = sqrt(( u* u) - (v * v));
            double temp1=d*((1/temp)-(1/u));
            if(temp1>=0.000)
            printf("Case %d: %.3lf\n",i + 1, temp1);
            else
                printf("Case %d: can't determine\n", i + 1);
        }
        else
            printf("Case %d: can't determine\n",i + 1);
    }
    return 0;
}