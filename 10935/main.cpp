#include <bits/stdc++.h>

#define ll long long int
using namespace std;

int main() {
    ll n, t, i,j=0;
    while (cin >> n) {
        if(n==0)
            break;
        vector<ll> v;
        for (i = 1; i <= n; i++) {
            v.push_back(i);
        }
        ll temp;
        cout << "Discarded cards:";
        if(v.size()>1)
            cout<<" ";
        while (v.size() >= 2) {
            temp = v.front();
            cout << temp;
            v.erase(v.begin());
            if (v.size() > 1) {
                cout << ", ";
                temp = v.front();
                v.erase(v.begin());
                v.push_back(temp);
            } else
                break;
        }
        cout << endl << "Remaining card: " << v[0]<<endl;
        v.pop_back();
    }
    return 0;
}