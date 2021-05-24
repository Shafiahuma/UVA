#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    while(cin>>a>>b)
    {
        if(a==-1 && b==-1)
            break;
        if(b>a)
            cout<<min((b-a),((99-b)+1+a))<<endl;
        else
            cout<<min((a-b),((99-a)+1+b))<<endl;
    }
    return 0;
}
