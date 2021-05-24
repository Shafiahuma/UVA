#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t,a,b,x,y,n,i,tempa,tempb;
    cin>>t;
    for(i=0;i<t;i++)
    {
       cin>>a>>b>>x>>y>>n;
       if(x>=y)
       {
           if(a>=b)
           {
               if(a-n>=x && b-n>=y && a-n<=b-n)
               {
                  a=a-n;
               }
               else if(b-n>=y)
               {
                   b=b-n;
               }
               else
               {
                   a=a-(n-(b-y));
                   if(a<x)
                       a=x;
                   b=y;
               }
           }
           else
           {
               if(a-n>=x && b-n>=y && a-n>=b-n)
               {
                   b=b-n;
               }
               else if(a-n>=x)
                   a=a-n;
               else
               {
                   b=b-(n-(a-x));
                   if(b<y)
                       b=y;
                   a=x;
               }
           }
       }
       else
        {
            if(a<=b)
            {
                if(a-n>=x)
                {
                    a=a-n;
                }
                else
                {
                    b=b-(n-(a-x));
                    if(b<y)
                        b = y;
                    a = x;
                }
            }
            else
            {
                if(b-n>=y)
                    b=b-n;
                else
                {
                    a=a-(n-(b-y));
                    if(a<x)
                        a=x;
                    b=y;
                }
            }
        }
       cout<<a*b<<endl;
    }
    return 0;
}