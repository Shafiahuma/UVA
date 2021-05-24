#include <bits/stdc++.h>
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi 2*acos(0.0)
#define cos(a) cos(a*pi/180)
#define ll long long int
using namespace std;

int main() {
    fast;
    ll t,n;
    cin>>t;
    ll i,j;
    for(i=0;i<t;i++)
    {
        cin>>n;
        ll a[n+55],temp;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        ll k=0,cc=0;
        for(j=1;j<n;j++) {
            temp = a[j];
            for (k = j-1;k>=0;k--)
            {
                if(temp<a[k]) {
                    swap(a[k+1],a[k]);
                    cc++;
                }
                else
                    break;
            }
        }
        cout<<"Optimal train swapping takes "<<cc<<" swaps."<<endl;
    }
}
