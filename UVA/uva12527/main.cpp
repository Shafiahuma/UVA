#include <bits/stdc++.h>
using namespace std;
bool repeated_digit(int n)
{
    set<int> s;
    int count1=0;
    while(n != 0)
    {
        int d = n % 10;
        s.insert(d);
        n = n / 10;
        count1++;
    }
   if(s.size()==count1)
       return true;
   else
       return false;
}
int main() {
    int n,m,i,count=0;
    while(cin>>n>>m)
    {
        count=0;
        for(i=n;i<=m;i++)
        {
           if(repeated_digit(i))
               count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
