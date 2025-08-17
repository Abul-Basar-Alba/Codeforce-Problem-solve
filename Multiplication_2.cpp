#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    ll sum=1,c=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        //sum*=a[i];
        if(a[i]==0)c=1;
    }
    if(c==1)
        cout<<0<<endl;
    else
    {
        for(int i=0;i<n;i++)
        {
            if(sum<=1000000000000000000/a[i])
            {
                sum*=a[i];
            }
            else
            {
             sum=-1;
             break;
            }
        }
        cout<<sum<<endl;
    }


}
