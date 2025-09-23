#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll n=s.length();
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
              if(((s[i]-'0')*10+(s[j]-'0'))%25==0)
                ans=s.length()-i-2;
            }
        }
        cout<<ans<<endl;
    }
}
