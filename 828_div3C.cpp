#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;char c;
        cin>>n>>c;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]!='g')
                s+=s[i];
            else if(s[i]=='g')
            {
                s+=s[i];
                break;
            }
        }
        if(c=='g')
        {
            cout<<0<<endl;
            continue;
        }
        ll f=0,cn=0,mx=0;
        for(int i=0;i<s.size();i++)
        {
           if(s[i]==c&&f==0)
           {
             cn++;
             f=1;
           }
           else if(s[i]!='g'&&f==1)
           {
               cn++;
           }
           else if(s[i]=='g')
           {
             mx=max(cn,mx);
             f=0;
             cn=0;
           }
        }
        cout<<mx<<endl;
    }
}
