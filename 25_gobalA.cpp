#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll cn=0,f=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
                cn++;
            if(s[i]=='1'&&s[i+1]=='1')
            {
                f=1;
            }
        }
        if(cn==2&&f==1)
        {
           cout<<"NO\n";
           continue;
        }
        if(cn%2==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
