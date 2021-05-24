#include <iostream>
using namespace std;
int main() {
    int t,n,i,j,count;
    char ch[1000];
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        count=0;
        for(j=0;j<n;j++)
        {
            cin>>ch[j];
        }
        j=0;
        while(j<n)
        {
            if(ch[j]=='.') {
                j = j + 3;
                count++;
            }
            else
                j++;
        }
        cout<<"Case "<<i+1<<": "<<count<<endl;
    }
    return 0;
}