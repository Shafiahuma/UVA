#include <stdio.h>
#include <string.h>
int main() {
    char s[10000000000];
    int p,q,r,b;
    while ((scanf("%s", s)) == 1) {
        p=s[(strlen(s))-1]-48;
        q=s[(strlen(s))-2]-48;
        r=s[(strlen(s))-3]-48;
        b=s[(strlen(s))-4]-48;
        q=q*10+p;
        b=b*10+r;
        if(((q%4==0)&&((q!=0)||(p!=0)))||((p==0)&&(q==0)&&(b%4==0)))
        {
            printf("This is leap year.\n");
        }
    }
    return 0;
    }