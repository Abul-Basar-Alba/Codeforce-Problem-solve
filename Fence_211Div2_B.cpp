/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll pre[200005];
    for(int i=0;i<n;i++)
    {
        pre[i+1]=pre[i]+a[i];
    }
    int ind=0;
    int mn=INT_MAX;
    for(int i=0;i<=n-k;i++)
    {
        ll total=pre[i+k]-pre[i];
        if(total<mn)
        {
            mn=total;
            ind=i+1;
        }
    }
    cout<<ind<<endl;
}*/
#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll sum=0;
    ll presum=0;
    int ind=k-1;
    for(int i=0;i<k;i++)
    {
        sum=a[i]+sum;
    }
    presum=sum;
    for(int j=k;j<n;j++)
    {
        presum=presum+a[j]-a[j-k];
        if(presum<sum)
        {
            presum=sum;
            ind=j;
        }
    }
    cout<<ind-k+2<<endl;
}
