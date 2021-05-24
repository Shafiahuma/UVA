#include <stdio.h>
#include <math.h>
int main()
{
    int h1,m1,h2,m2,temp,temp1,time;
    while(1)
    {
        scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
        if(h1==0 && m1==0 && h2==0 && m2==0)
            break;
        if(h1>0)
          temp=(h1*60)+m1;
        else
            temp=(24*60)+m1;
        if(h2>0)
          temp1=(h2*60)+m2;
        else
          temp1=(24*60)+m2;
        time=temp1-temp;
        if(time>0)
            time=time;
        else
            time=1440+time;
          printf("%d\n",time);
        }
}