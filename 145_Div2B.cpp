#include<bits/stdc++.h>
#define ll ll int
using namespace std;
ll sq(ll a)
{
    ll x=sqrt(a)+2;
    while(x*x>a)
        x--;
    return x;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cout<<(sq(n-1))<<endl;
    }
}
