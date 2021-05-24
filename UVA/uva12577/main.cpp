#include <stdio.h>
#include <string.h>
int main()
{
    int i=1;
    char h[5]="Hajj";
    char h1[6]="Umrah";
    char h2[6];
    char h3[2]="*";
    while(1)
    {
        scanf("%s",h2);
        if((strcmp(h2,h3))==0)
            break;
        if((strcmp(h2,h))==0)
            printf("Case %d: Hajj-e-Akbar\n",i);
        else if((strcmp(h2,h1))==0)
            printf("Case %d: Hajj-e-Asghar\n",i);
        i++;
    }
    return 0;
}