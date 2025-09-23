#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+2];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        ll p=(n-1)/2;
        ll c=0;
        for(int i=p;i<n;i++)
        {
            if(a[p]==a[i])
                c++;
        }
        cout<<c<<endl;
    }
}
