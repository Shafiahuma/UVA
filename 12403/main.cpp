#include <stdio.h>
#include <string.h>
int main()
{
    int t,i;
    long long int a,sum=0;
    char s[7];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",s);
        if((strcmp(s,"donate"))==0) {
            scanf("%lld", &a);
            sum=sum+a;
        }
        else
        printf("%lld\n",sum);
    }
        return 0;

}
