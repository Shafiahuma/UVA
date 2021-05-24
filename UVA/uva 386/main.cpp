#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,i;
    for(i=6;i<=200;i++)
    {
        for(j=i;j>=1;j--)
        {
            for(k=i;k>=1;k--)
            {
                for(m=i;m>=1;m--)
                {
                    j=pow(j,3);
                    k=pow(k,3);
                    m=pow(m,3);
                    i=pow(i,3);
                    if(i==j+k+m)

                }
            }
        }
    }
}