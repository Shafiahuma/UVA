/// i can climb k stairs at a time and i need to find the number of ways i can climb n stairs
#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
ll dp[100007] = {0};

ll lad(ll n, ll k) {
    if (n == 1)
        return 1;
    if (n <= 0)
        return 0;
    else {
        ll ans = 0;
        for (ll i = 1; i <= k; i++) {
            ans += (lad(n - i, k))%mod;
        }
        return ans;
    }
}


ll bu(ll n, ll k) {
    dp[0] = 1;
    ll i, j;
    for (i = 1; i <= n; i++) {
        dp[i]=0;
        for (j = 1; j <= k; j++) {
            if (i - j >= 0)
                dp[i] += (dp[i - j])%mod;
            //cout<<dp[i]<<"i"<<endl;
        }
    }
    return dp[n];
}

int main() {
    ll n, k;
    cin >> n ;
    k=n;
    cout << lad(n, k);
    return 0;
}
