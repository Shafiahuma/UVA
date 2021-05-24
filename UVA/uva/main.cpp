#include <iostream>
using namespace std;
int main()
{
    int t,n,actual,i,sum,m;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        actual=n;
        sum=0;
        while(1)
        {
            while(n>0)
            {
                sum=sum+(n*n);
                n=n/10;
            }if(sum==1)
            {
                cout<<"Case #"<<i+1<<": "<<actual<<" is a Happy number."<<endl;
                break;
            }
            else if(sum<10)
                cout << "Case #" << i + 1 << ": " << actual << " is a Unhappy number." << endl;
                break;
            }
            else
                n=sum;
        }
    }
    return 0;
}