#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=1;i<n;i++)
        {
           if(a[i]<a[i-1])
                ans=max(ans,a[i-1]);
        }
        cout<<ans<<endl;
    }
}
