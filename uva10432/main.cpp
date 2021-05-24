#include <stdio.h>
#include <math.h>
int main()
{
    double a,ans,n;
    while((scanf("%lf %lf",&a,&n))==2)
    {
        ans=.5*n*a*a*sin(2*acos(-1)/n);
        printf("%.3lf\n",ans);
    }
    return 0;
}