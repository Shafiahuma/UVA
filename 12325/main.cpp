#include <bits/stdc++.h>

#define ll long long int
using namespace std;

int main() {
    ll t, i, j, k, tt1, ss1;
    double s1, v1, s2, v2, tt, ss, w;
    ll sum, res;
    cin >> t;
    for (i = 0; i < t; i++) {
        sum=0;
        cin >> w >> s1 >> v1 >> s2 >> v2;
        tt = s1 / v1;
        ss = s2 / v2;
        if (tt < ss) {
            tt1 = (ll) w / (ll) s1;
            sum += tt1 * (ll) v1;
            res = (ll) w - (tt1 * (ll) s1);
            ss1 = res / (ll) s2;
            sum += ss1 * (ll) v2;
            cout<<tt1<<" "<<ss1<<" "<<sum<<endl;
        } else {
            tt1 = (ll) w / (ll) s2;
            sum += tt1 * (ll) v2;
            res = (ll) w - (tt1 * (ll) s2);
            ss1 = res / (ll) s1;
            sum += ss1 * (ll) v1;
        }
        cout<<"Case #"<<i+1<<": " << sum << endl;
    }
    return 0;
}
