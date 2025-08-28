#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    /*ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        ll n,k,x;
        cin>>n>>k>>x;
        if(x>n*(n+1)/2)
          cout<<"NO"<<endl;
        else if(x>=k*(k+1)/2&&x<=n*(n+1)/2-(n-k)*(n-k+1)/2)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }*/
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        ll n,k,x;
        cin>>n>>k>>x;
        ll mn,mx;
        mn=(k*(k+1))/2;
        ll tem=n-k;
        mx=(n*(n+1)/2)-(tem*(tem+1)/2);
        if(x>=mn&&x<=mx)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
