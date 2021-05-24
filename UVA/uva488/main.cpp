#include <stdio.h>
int main()
{
    int t,f,a,i,j,k,l;

    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%d %d",&a,&f);

        for(l=1;l<=f;l++) {
            for (i = 1; i <= a; i++) {
                for (j = 1; j <= i; j++) {
                    printf("%d", i);
                }
                printf("\n");
            }
            for (i = a - 1; i >= 1; i--) {
                for (j = 1; j <= i; j++) {
                    printf("%d", i);
                }
                printf("\n");
            }
            if (l < f)
                printf("\n");
        }
        if(k<t)
            printf("\n");
    }
    return 0;
}