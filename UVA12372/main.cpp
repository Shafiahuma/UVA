#include <stdio.h>
int main() {
    int i,t,l,w,h;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&l,&w,&h);
        if(l>20)
            printf("Case %d: bad\n",i);
        else if(w>20)
            printf("Case %d: bad\n",i);
        else if(h>20)
            printf("Case %d: bad\n",i);
        else
            printf("Case %d: good\n",i);
    }
    return 0;
}