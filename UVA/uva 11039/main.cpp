#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool comp(ll a,ll b)
{
    return abs(a)>abs(b);
}
int main() {
    int t,i;
    cin>>t;
    for(i=0;i<t;i++) {
        ll n, j;
        cin>>n;
        if(n!=0) {
            ll a[n + 1];
            for (j = 0; j < n; j++) {
                cin >> a[j];
            }
            sort(a, a + n, comp);
            ll temp = a[0], count = 1;
            for (j = 1; j < n; j++) {
                if (temp * a[j] < 0) {
                    count++;
                    temp = a[j];
                }
            }
            cout << count << endl;
        } else
            cout<<"0"<<endl;
    }
    return 0;
}