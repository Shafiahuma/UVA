#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi 2*acos(0.0)
#define cos(a) cos(a*pi/180)
#define ll long long int
using namespace std;

int main() {
    fast;
    ll n;
    while(cin>>n)
    {
        ll a[n+55],i,p;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll cc=0,sum=0;
        while(1)
        {
            for(i=0;i<n-1;i++)
            {
                if(a[i+1]<a[i]) {
                    swap(a[i],a[i+1]);
                    cc++;
                }
            }
            if(cc==0)
                break;
            sum+=cc;
            cc=0;
        }
        cout<<"Minimum exchange operations : "<<sum<<endl;
    }
}