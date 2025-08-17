#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<int>v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
         ll ans=0,p=0;
        for(ll i=1;i<n;i++)
        {
            ll temp=v[i];
            ll count=0;
            while(temp<v[i-1])
            {
                temp=2*temp;
                count++;
            }
            while(temp>=2*v[i-1]&&p!=0)
            {
                v[i-1]=2*v[i-1];
                p--;
            }
            p+=count;
            ans+=p;
        }
        cout<<ans<<endl;
    }
}
