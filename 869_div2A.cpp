#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int ans=1;
        string s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        for(int i=1;i<n;i++)
        {
            ans+=(s[i]==s[0]);
        }
        cout<<ans<<endl;

    }
}


