#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n+3];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    ll res=0;
    for(int i=0;i<n;i++)
    {
        res+=abs(i+1-a[i]);
    }
    cout<<res<<endl;
}
