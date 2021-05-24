#include <bits/stdc++.h>

#define ll long long int
#define mod 1000000007
using namespace std;
ll dp[100007] = {0};
ll coins[] = {1, 5, 10, 25, 50};

ll bu(ll n) {
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    ll i, j;
    for (i = 0; i < 5; i++)
        for (j = coins[i]; j <= n; j++)
            dp[j] += dp[j - coins[i]];
    return dp[n];
}

int main() {
    ll n, k;
    while (cin >> n) {
        if (bu(n) > 1)
            cout << "There are " << bu(n) << " ways to produce " << n << " cents change." << endl;
        else
            cout<<"There is only 1 way to produce "<<n<<" cents change."<<endl;
    }
    return 0;
}
