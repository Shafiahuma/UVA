#include <stdio.h>
int main()
{
    unsigned long long fact;
    long long int i,n;
    while((scanf("%lld",&n))==1)
    {
        fact=1;
            if(n<0)
           {
            n=n*(-1);
            if(n%2!=0)
                printf("Overflow!\n");
            else
                printf("Underflow!\n");
           }
            else if (n < 8)
                printf("Underflow!\n");
            else if (n > 13)
                printf("Overflow!\n");
            else {
                for (i = 1; i <= n; i++)
                    fact = fact * i;
                printf("%lld\n", fact);
            }
        }
    return 0;
}