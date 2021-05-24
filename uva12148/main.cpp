#include <bits/stdc++.h>
using namespace std;
bool leapyear(int n)
{
    if(n%400==0)
        return true;
    if(n%100==0)
        return false;
    if(n%4==0)
        return true;
    return false;
}
bool mcheck(int m)
{
    return m == 4 || m == 6 || m == 9 || m == 11;
}
int main() {
    int n,i,d,m,y,c,d1,m1,c1,y1;
    while(scanf("%d",&n)==1)
    {
        int count=0,sum=0;
        if(n==0)
            break;
        cin >> d >> m >> y >> c;
        for(i=1;i<n;i++) {
            cin >> d1>> m1 >> y1 >> c1;
            if(y1-y==0)
            {
                if(m1-m==0)
                {
                    if(d1-d==1) {
                        count = count + d1 - d;
                        sum = sum + c1 - c;
                    }
                }
                else if(m1-m==1)
                {
                   if((d-d1==27 && !leapyear(y) && m==2 )||(d-d1==28 && leapyear(y) && m==2)||(d-d1==29 && mcheck(m))||(d-d1==30 && !mcheck(m)))
                   {
                       count++;
                       sum=sum+(c1-c);
                   }
                }
            } else if(y1-y==1)
            {
                if(m==12)
                {
                    if(d-d1==30) {
                        count++;
                        sum = sum + (c1 - c);
                    }
                }
            }
            d=d1;
            m=m1;
            y=y1;
            c=c1;
        }
        cout<<count<<" "<<sum<<endl;
    }
    return 0;
}
