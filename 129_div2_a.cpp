#include<bits/stdc++.h>
#define ll ll int
using  namespace  std;
int main()
{
    ll n;
    cin>>n;
    ll a[n+3];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll mn=a[0],c=0,d=0;
    for(ll i=1;i<n;i++)
    {
        if(mn>a[i])
        {
            mn=min(mn,a[i]);
            c=i;
        }
    }
    sort(a,a+n);
    if(a[0]==a[1])
        cout<<"Still Rozdil"<<endl;
    else
        cout<<c+1<<endl;
}
