#include <bits/stdc++.h>
using namespace std;
int n,m;
string s[1005];
int dif(string s1)
{
    int i,k=0;
    for(i=0;i<m;i++)
    {
       if(s[0][i]!=s1[i])
           k++;
    }
    return k;
}
int main()
{
    int i,k;
    string s1;
    while(cin>>n>>m) {
        cin>>s[0];
        for (i = 1; i < n; i++) {
             cin>>s1;
             k=dif(s1);
             s[k]=s1;
        }
        for(i=0;i<n;i++)
        {
            cout<<s[i]<<endl;
        }
    }
}