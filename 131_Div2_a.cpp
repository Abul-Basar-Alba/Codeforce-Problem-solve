#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    int cn=0;
    for(ll a=0;a*a<=n;a++)
    {
        ll b=n-(a*a);
        if((a+b*b)==m)
           cn++;
    }
    cout<<cn<<endl;

}
