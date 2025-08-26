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
        int mx=-1,sb=0;
        for(int i=0;i<=30;i++)
        {
           if((k&(1<<i)))
           {
              mx=i;
              sb++;
           }
        }
        if(n==1||mx+1==sb)
        {
            cout<<k<<' ';
            for(int i=1;i<n;i++)
                cout<<0<<' ';
            cout<<endl;
        }
        else
        {
            ll val=(1<<mx)-1;
            ll ex=k-val;
            cout<<val<<' '<<ex<<' ';
            for(int i=3;i<n;i++)
                cout<<0<<' ';
            cout<<endl;
        }
    }
}
