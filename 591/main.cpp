#include <bits/stdc++.h>

#define ll long long int
using namespace std;

int main() {
    ll n,j=0;
    while(cin>>n) {
        if(j>0)
            cout<<endl;
        if(n==0)
            break;
        ll a[n + 88], i, sum = 0;
        for (i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        sum /= n;
        ll s = 0;
        for (i = 0; i < n; i++) {
            if (a[i] - sum > 0)
                s += a[i] - sum;
        }
        j++;
        cout << "Set #" << j<<endl;
        cout<<"The minimum number of moves is "<<s<<"."<<endl;
    }
    return 0;
}