#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,temp,j;
    cin>>t;
    string s;
    getchar();
    for(i=0;i<t;i++)
    {
       getline(cin,s);
       n=s.length();
       //cout<<n<<endl;
       vector <char> ch;
       temp=sqrt(n);
       if(temp*temp!=n)
           cout<<"INVALID"<<endl;
       else
       {
           int p=0;
           while(ch.size()!=n) {
               for (j = p; j < n; j = j + temp) {
                   ch.push_back(s[j]);
               }
               p++;
           }
           for(j=0;j<ch.size();j++)
           {
               cout<<ch[j];
           }
           cout<<endl;
           ch.clear();
       }
    }
}