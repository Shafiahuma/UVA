#include <bits/stdc++.h>
#define pi 3.162
#define aaa 100000
#define ll long long int
using namespace std;

int main() {
    ll t,i,j,n,k;
    cin>>t;
    string s;
    for(j=0;j<t;j++)
    {
        cin>>n>>k;
        cin>>s;
        if()
        else if(k==0)
            cout<<"YES"<<endl;
        else {
            ll cc=0;
            for (i = 0; i < k; i++) {
                if(s[i]!=s[n-i-1]) {
                    cc = 1;
                    break;
                }
            }
            if(!cc)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
