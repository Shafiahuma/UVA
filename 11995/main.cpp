#include <bits/stdc++.h>

#define ll long long int
using namespace std;

int main() {
    ll n,i,a,b;
    while(cin>>n)
    {
        ll cc=0,ss=0,qq=0,pp=0,val;
        stack<ll> s;
        queue<ll>q;
        priority_queue<ll>p;
        for(i=0;i<n;i++)
        {
            cin>>a>>b;
            if(a==1)
            {
                s.push(b);
                q.push(b);
                p.push(b);
            }
            else
            {
                cc++;
                if(!s.empty()) {
                    val = s.top();
                    if (val == b)
                        ss++;
                    s.pop();
                }
                if(!q.empty()) {
                    val = q.front();
                    if (val == b)
                        qq++;
                    q.pop();
                }
                if(!p.empty()) {
                    val = p.top();
                    if (val == b)
                        pp++;
                    p.pop();
                }
            }
        }
        if(cc!=ss && cc!=qq && cc!=pp)
            cout<<"impossible"<<endl;
        else if((cc==ss && cc==qq )|| (cc==pp && cc==qq)||(cc==ss && cc==pp ))
            cout<<"not sure"<<endl;
        else if(cc==pp && cc!=qq && cc!=ss)
            cout<<"priority queue"<<endl;
        else if(cc==qq && cc!=ss && cc!=pp)
            cout<<"queue"<<endl;
        else if(cc==ss && cc!=qq && cc!=pp)
            cout<<"stack"<<endl;
        while (!q.empty())
        {
            q.pop();
        }
        while(!s.empty())
            s.pop();
        while (!p.empty())
            p.pop();
    }
}
