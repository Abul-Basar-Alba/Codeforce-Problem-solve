#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if((a%2!=0&&b%2!=0))
            cout<<"NO\n";
        else if(a%2==0&&b%2==0)
         cout<<"YES\n";
        else if((a%2==0&&b%2!=0)&&(a/2)==b)
            cout<<"NO\n";
         else if((a%2!=0&&b%2==0)&&(b/2)==a)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}
