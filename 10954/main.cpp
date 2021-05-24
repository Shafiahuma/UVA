#include <bits/stdc++.h>

#define ll long long int
using namespace std;

int main() {
    ll n,i,a,b;
    vector<ll>p;
    vector<ll>q;
    while(cin>>n) {
        if(n==0)
            break;
        ll cost=0;
        for(i=0;i<n;i++)
        {
            cin>>a;
            p.push_back(a);
        }
        sort(p.begin(),p.end());
        ll sum=0;
        cost=0;
        while (p.size()>=2)
        {
            //cout<<p[0]<<" "<<p[1]<<endl;
            sum=p[0]+p[1];
            p.erase(p.begin()+0);
            p.erase(p.begin()+0);
            p.push_back(sum);
            sort(p.begin(),p.end());
            cost+=sum;
        }
        cout<<cost<<endl;
        p.clear();
    }
}