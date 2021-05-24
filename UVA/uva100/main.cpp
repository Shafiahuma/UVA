#include <stdio.h>
int main()
{
    int i,c,j,k,temp,n,flag,max;
    while((scanf("%d %d",&i,&j))==2)
    {
        flag=0;
        if(i>j)
        {
            flag=1;
           temp=i;
           i=j;
           j=temp;
        }
        max=0;
        for(c=i;c<=j;c++) {
            k = 1;
            n = c;
            while (n > 1) {
                if (n % 2 == 1)
                    n = 3 * n + 1;
                else
                    n = n / 2;
                k++;
            }
            if (max < k)
                max = k;
        }
        if(flag==1)
        printf("%d %d %d\n",j,i,max);
        else
            printf("%d %d %d\n",i,j,max);
    }
    return 0;

}