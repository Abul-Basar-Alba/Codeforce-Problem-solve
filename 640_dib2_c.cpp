#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,x;
        cin>>n>>k;
        if(k<n)
        cout<<k<<endl;
        else
        {
        x=k/(n-1);//n-1 is set number every divisible number here n=4 is 3
        if((x+k)%n==0)
        cout<<(k+x)-1<<endl;
        else
        cout<<k+x<<endl;
        }
    }
}
