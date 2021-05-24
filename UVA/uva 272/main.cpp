#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char s[1001];
    int i,k[1001],j=0;
    while(scanf("%c[^\n]%*c",s)==1)
    {
        for(i=0;i<strlen(s);i++)
        {
            if(s[i]=='"') {
                k[j] = i;
                j++;
            }
        }
        for(l=0;l<j;l++)
        {
            if(l+1%2!=0)
            {
                s[l]=
        }
    }
    return 0;
}