#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll k1,l,n1;
    if(k+1<n/2)
    {
        l=(n/2)/(k+1);
        k1=k*l;
        n1=n-(k1+l);
        cout<<l<<" "<<k1<<" "<<n1;
    }
    else
    {
        l=0;
        k1=0;
        n1=n;
        cout<<l<<" "<<k1<<" "<<n1;
    }


}
