#include <stdio.h>
#include <string.h>
int main()
{
    int t,i,j,c1,k,c2,c3;
    char n1[4]="one",n2[4]="two",n3[6]="three",e1[100];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",e1);
        c1=0;
        c2=0;
        c3=0;
        if(strlen(e1)==5)
        {
            for(j=0;j<5;j++)
            {
                if(e1[j]==n3[j])
                    c1++;
            }
            if(c1>=4)
                printf("3\n");
        }
        else
        {
            for(k=0;k<3;k++)
            {
                if(e1[k]==n1[k])
                {
                    c2++;
                    continue;
                }
                else {
                    if (e1[k] == n2[k]) {
                        c3++;
                        continue;
                    }
                }
            }
            if(c2>=2)
                printf("1\n");
            else if(c3>=2)
                printf("2\n");
        }
    }
    return 0;

}