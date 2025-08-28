#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        ll n;
        cin>>n;
        ll a[n];
        //vector<ll>a;
        ll tem[n];
        //vector<ll>tem;
        for(ll j=0;j<n;j++)
        {
            cin>>a[j];
        }
        copy(a,a+n,tem);
        //copy(a.begin(),a.end(),tem);
        sort(tem,tem+n);
        //sort(tem.begin(),tem.end());
        int c=0;
        for(ll j=0;j<n;j++)
        {
            if(a[j]!=tem[j])
            {
                c++;
                break;
            }
        }

        if(c==1)
        cout<<"0"<<endl;
        else
        {
            ll mn=10e9;
            ll def;
            for(ll j=0;j<n-1;j++)
            {
               def=abs(a[j]-a[j+1]);
               cout<<def<<" ";
               if(def<mn)
               {
                   mn=def;
               }//3
//                53943947 298407670 734902000
            }
            cout<<mn;
            // cout<<(def/2)+1<<endl;
            }
        }
    }

