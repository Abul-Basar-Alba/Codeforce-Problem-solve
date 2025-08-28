#include<bits/stdc++.h>
#define ll ll int
using  namespace  std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        vector<ll>vec;
        ll n;
        cin>>n;
        ll a[n+3];
        for(int i=0;i<n;i++)
        {
           cin>>a[i];
        }
        ll i=0;
        ll j=n-1;
        while(i<j)
        {
            vec.push_back(a[i]);
            vec.push_back(a[j]);
            i++;
            j--;
        }
        if(n%2==1)vec.push_back(a[i]);
        for(int i=0;i<n;i++)
            cout<<vec[i]<<" ";
        cout<<endl;
    }
}
