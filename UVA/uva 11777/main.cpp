#include <bits/stdc++.h>
using namespace std;
int min1(int a,int b,int c)
{
    int temp;
    temp=min(a,b);
    temp=min(temp,c);
    return temp;
}
int main() {
    int t = 0,i,a,b,c,d,t1,t2,t3,sum;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b>>c>>d>>t1>>t2>>t3;
        int temp=min1(t1,t2,t3),avg;
        if(temp==t1)
            avg=(t2+t3)/2;
        else if(temp==t2)
            avg=(t1+t3)/2;
        else
            avg=(t1+t2)/2;
        sum=a+b+c+d+(avg);
        if(sum>=90)
            cout<<"Case "<<i+1<<": A"<<endl;
        else if(sum>=80 && sum<90)
            cout<<"Case "<<i+1<<": B"<<endl;
        else if(sum>=70 && sum<80)
            cout<<"Case "<<i+1<<": C"<<endl;
        else if(sum>=60 && sum<70)
            cout<<"Case "<<i+1<<": D"<<endl;
        else
            cout<<"Case "<<i+1<<": F"<<endl;
    }
    return 0;
}