#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t; 
    cin >> t;

    while (t--) 
    {
        ll n;
        cin >> n;
        ll mx1=0,mx2=0;
        while(n--)
        {
            ll w,h;
            cin>>w>>h;
            mx1=max(mx1,w);
            mx2=max(mx2,h);

        }
        cout<<2*(mx1+mx2)<<endl;
    }
}