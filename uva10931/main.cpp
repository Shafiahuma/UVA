#include <bits/stdc++.h>
using namespace std;
long long int counter(long long n) {
    vector<int> v;
    long long int rem,count=0,i;
    while(n!=0) {
        rem=n%2;
        if(rem==1)
            count++;
        v.push_back(rem);
        n=n/2;
    }
    for(i=v.size()-1;i>=0;i--) {
        cout<<v[i];
    }
    return count;
}
int main() {
    long long int n,rem,count,bin=0,base=1;
    while(cin>>n) {
        base = 1;
        count = 0;
        bin = 0;
        if (n == 0)
            break;
        cout << "The parity of ";
        count = counter(n);
        cout << " is " << count << " (mod 2)." << endl;
    }
    return 0;
}
