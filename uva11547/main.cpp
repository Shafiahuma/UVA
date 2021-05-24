#include <stdio.h>
#include <math.h>
int main()
{
    long long int n,ans,out,rem,t,i;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        ans=(n*315)+36962;
        rem=ans%100;
        out=abs(rem/10);
        printf("%lld\n",out);
    }
    return 0;
}