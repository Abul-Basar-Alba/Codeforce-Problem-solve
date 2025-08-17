#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        if(n%k==0)
        {
            cout<<2<<endl;
            cout<<1<<' '<<n-1<<endl;
        }
        else if(n%k!=0)
        {
            cout<<1<<endl;
            cout<<n<<endl;
        }
    }
}
