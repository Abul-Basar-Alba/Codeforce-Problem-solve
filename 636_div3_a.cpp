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
        cin>>n;//low of geometric r^n-1.so x*(r^n-1)=n;;x=n/(r^n-1)
        for(ll i=2;i<10e9;i++)
        {
            ll p=pow(2,i)-1;
            if(n%p==0)
            {
               cout<<n/p<<endl;
               break;
            }
        }
    }
}
