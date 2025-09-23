#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,b;
        cin>>n>>a>>b;
        if(n==a&&n==b)
            cout<<"YES\n";
        else if(n<=a+b)
            cout<<"NO\n";
        else if(n-(a+b)==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}
