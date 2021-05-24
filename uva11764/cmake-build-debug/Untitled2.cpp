#include <bits/stdc++.h>
#define ll long long int
#define n 10005
using namespace std;
ll phi[n + 1];
void phi_1_to_n() {
    for (int i = 0; i <= n; i++)
        phi[i] = i;
    for (int i = 2; i <= n; i++) {
        if (phi[i] == i) {
            for (int j = i; j <= n; j += i) {
                phi[j]= (phi[j] *(i-1))/ i;
            }
        }
    }
}
int main() {
    phi_1_to_n();
    //cout<<phi[10]<<endl;
    int t,m,j,i,k;
    ll h;
    cin>>t;
    for(k=0;k<t;k++) {
        cin >> m;
        h = 0;
        for (i = 1; i <= m; i++) {
            h = h + phi[i];
        }
        cout << h * h << endl;
    }
    return 0;
}
