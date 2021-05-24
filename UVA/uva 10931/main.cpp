#include <bits/stdc++.h>
using namespace std;
string DecimalToBinaryString(int a)
{
    string binary = "";
    int mask = 1;
    for(int i = 0; i < 31; i++)
    {
        if((mask&a) >= 1)
            binary = "1"+binary;
        else
            binary = "0"+binary;
        mask<<=1;
    }
    return binary;
}
int main() {
    int a;
    cin>>a;
    cout<<DecimalToBinaryString(a);
    return 0;
}