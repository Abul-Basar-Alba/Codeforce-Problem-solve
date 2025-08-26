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
        if(k>=n-1)
            cout<<1<<endl;
        else
            cout<<n<<endl;
    }
}
