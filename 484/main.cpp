#include <bits/stdc++.h>

#define ll long long int
using namespace std;

int main() {
    ll n, j;
    unordered_map<ll,ll>a;
    vector<ll> v;
    set<ll> s;
    ll temp;
    while (cin >> n) {
        temp = s.size();
        // if (n == 1000)
        //     break;
        a[n]++;
        s.insert(n);
        if (temp < s.size())
            v.push_back(n);
    }
    for (j = 0; j < v.size(); j++)
        cout << v[j] << " " << a[v[j]] << endl;
}