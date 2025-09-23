#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,n;
        cin>>a>>b>>n;
        ll arr[n],sum=b;
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
           if(arr[i]<a)
           {
               sum=sum+arr[i];
           }
           else//if(arr[i]>a)
           {
               sum=sum+a-1;
           }
        }
        cout<<sum<<endl;
    }
}
