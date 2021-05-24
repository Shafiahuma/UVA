#include <bits/stdc++.h>
using namespace std;
string space(string s1)
{
    int j,count=0,k=0;
    string temp="";
    for(j=0;j<s1.length();j++)
    {
        if(s1[j]!=' ')
        {
           temp=temp+s1[j];
        }
    }
    return temp;
}
int main() {
    int t,i;
    string s,s1,p;
    cin>>t;
    getchar();
    for(i=0;i<t;i++)
    {
       getline(cin,s);
        getline(cin,s1);
         if (s==s1)
                cout << "Case " << i + 1 << ": Yes" << endl;
         else {
             if(space(s)!=s1)
             cout << "Case " << i + 1 << ": Wrong Answer" << endl;
             else
                 cout << "Case " << i + 1 << ": Output Format Error" << endl;
         }
    }
    return 0;
}
