#include <bits/stdc++.h>
using namespace std;
int dp[10000]={0};
int topdowndp(int n)
{
    if(n==0 || n==1) {
        dp[n]=1;
        return dp[n];
    }
    else if(dp[n]!=0)
    {
        return dp[n];
    }
    else
    {
        dp[n]= topdowndp(n-2)+ topdowndp(n-1);
        return dp[n];
    }
}
int bottomupdp(int n)
{
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main() {
    int n;
    cin>>n;
    cout<<bottomupdp(n)<<endl;
    return 0;
}
