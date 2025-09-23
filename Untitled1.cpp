#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n,mod=1e9+7;
        cin>>n;
        int sum;
        sum=(n*n)%mod;
        cout<<sum<<endl;
    }
}

