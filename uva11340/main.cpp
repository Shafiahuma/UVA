#include <iostream>
#include <string.h>
using namespace std;
int main() {
    long long int t,n,c[100],i,k,j,sum,l;
    double sum1;
    char s1[100],s[10000];
    cin>>t;
    for(i=0;i<t;i++)
    {
        sum=0;
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>c[j]>>s1[j];
        }
        cin>>l;
        cin>>s;
        for(j=0;j<n;j++)
        {
            for(k=0;k<strlen(s);k++)
            {
                if(s[k]==s1[j])
                {
                    sum=sum+c[j];
                }
            }
        }
        sum1=((double)sum/100.0);
        cout<<sum1<<"$"<<endl;
    }
    return 0;
}