#include <stdio.h>
#include <math.h>
int main()
{
    int t,n,i,j,a[100],mile,jes,sumM,sumJ;
    int temp,temp1;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        sumM=0;
        sumJ=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            temp=a[j]/30+1;
            mile=temp*10;
            sumM=sumM+mile;
            temp1=a[j]/60+1;
            jes=temp1*15;
            sumJ=sumJ+jes;
        }
        if(sumM>sumJ)
            printf("Case %d: Juice %d\n",i+1,sumJ);
        else if(sumM<sumJ)
            printf("Case %d: Mile %d\n",i+1,sumM);
        else
            printf("Case %d: Mile Juice %d\n",i+1,sumM);
    }
    return 0;
}