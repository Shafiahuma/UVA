#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,i;
    double x,y,z;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>x>>y>>z;
        z=(z/(x+y));
        cout<<((x*z)+(x-y)*z)<<endl;
    }
    return 0;
}
