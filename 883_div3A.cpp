#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,c=0;
        cin>>n;
        while(n--)
        {
            ll a,b;
            cin>>a>>b;
            if(a>b)
                c++;
        }
        cout<<c<<endl;
    }
}
