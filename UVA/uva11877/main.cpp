#include <iostream>
using namespace std;
int main()
{
    int n,temp;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        temp=n/2;
        cout<<temp<<endl;
    }
    return 0;
}