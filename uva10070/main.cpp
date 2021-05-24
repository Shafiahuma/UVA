#include <bits/stdc++.h>
using namespace std;
long long int sumo(string s)
{

}
int main() {
    string s;
    long long int n,temp;
    n=s.length();
    while(cin>>s)
    {
      if(s[n-1]==0 && s[n-2]==0)
      {
          temp=(2*(s[n-4]-48))+(s[n-3]-48);
          if(temp%4==0)
              cout<<"This is leap year."<<endl;
      } else
      {
          temp=(2*(s[n-2]-48))+(s[n-1]-48);
          if(temp%4==0)
              cout<<"This is leap year."<<endl;
      }
      if(s[n-1]==5 || s[n-1]==0)
      {

      }
    }
    return 0;
}
