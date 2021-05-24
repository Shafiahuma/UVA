#include <bits/stdc++.h>
using namespace std;
int main() {
   string s;
   long long int sum=0;
   int n,i;
  while( cin>>s) {
      if(s.compare("0")==0)
          break;
      sum = 0;
      n = s.length();
    //  cout<<n<<endl;
      for (i = 0; i < n; i++) {
          if((i+1)%2!=0)
            sum = sum + (s[i] - 48);
          else
            sum = sum - (s[i] - 48);
      }
      sum = abs(sum);
     // cout<<sum<<endl;
      if (sum % 11 == 0)
          cout << s<<" is a multiple of 11." << endl;
      else
          cout << s<<" is not a multiple of 11." << endl;
  }
    return 0;
}
