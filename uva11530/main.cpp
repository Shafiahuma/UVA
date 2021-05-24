#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,i,sum,j;
    string s;
    cin>>t;
    for(i=1;i<=t;i++)
    {

        sum=0;
        for(j=0;j<size(s);j++)
        {
            if(s[j]=='a' || s[j]=='d' || s[j]=='g' || s[j]=='j' ||s[j]=='m' ||s[j]=='p'||s[j]=='t'||s[j]=='w'||s[j]==' ')
                sum=sum+1;
            else if(s[j]=='b' || s[j]=='e' || s[j]=='h' || s[j]=='k' ||s[j]=='n' ||s[j]=='q'||s[j]=='u')
                sum=sum+2;
            else if(s[j]=='c' || s[j]=='f' || s[j]=='i' || s[j]=='l' ||s[j]=='o' ||s[j]=='r'||s[j]=='v'||s[j]=='y')
                sum=sum+3;
            else if(s[j]=='s' || s[j]=='z')
                sum=sum+4;
        }
        printf("%d\n",sum);
    }
    return 0;
}