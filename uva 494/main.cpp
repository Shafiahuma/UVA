#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main() {
    char s[100000];
    int i,count,count1;
    while((scanf("%[^\n]%*c",s))==1)
    {
        count=0;
        count1=0;
        for(i=0;i< strlen(s); i++)
        {
            if(s[i]==' ') {
                count++;
                if(s[i+1]>=65 || s[i+1]<=90 || s[i+1]>=97 || s[i+1]<=122)
                    count--;
            }
        }
        cout<<count+1<<endl;
    }
    return 0;
}