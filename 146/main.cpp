#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    char s[555];
    while(cin>>s)
    {
        ll n=strlen(s);
        if(s[0]=='#')
            break;
        if(next_permutation(s,s+n))
        {
            cout<<s<<endl;
        }
        else
            cout<<"No Successor"<<endl;
    }
    return 0;
}