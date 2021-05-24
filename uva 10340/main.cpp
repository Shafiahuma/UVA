#include <bits/stdc++.h>
using namespace std;
int main() {
    string s,t;
    while(cin>>s>>t)
    {
        int n,m,i,j,count=0;
        n=s.size();
        m=t.size();
        j=0;
        for(i=0;i<m;i++)
        {
            if(t[i]==s[j])
            {
                count++;
                j++;
            }
        }
        if(count==n)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}