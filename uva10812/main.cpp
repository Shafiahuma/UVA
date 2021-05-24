#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,i,s,d,temp,temp1;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s>>d;
        if(d>s)
            cout<<"impossible"<<endl;
        else
        {
            temp=s+d;
            temp1=s-d;
            if(temp1%2!=0 || temp%2!=0)
                cout<<"impossible"<<endl;
            else
            cout<<(temp/2)<<" "<<(temp1/2)<<endl;
        }
    }
    return 0;
}