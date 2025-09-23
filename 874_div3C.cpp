#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<"safety"<<endl;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+2];
        ll e=0,od=0,f=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                e++;
            else
                od++;

            if(a[i]==1)
                f=1;
        }
        if(od==n||e==n||f==1)
        {
            cout<<"YES\n";
            continue;
        }
        sort(a,a+n);
        vector<ll>v;
        ll f1=0;
        if(a[0]%2==0)
            f1++;
        v.push_back(a[0]);
        for(int i=1;i<n;i++)
        {
           if(f1>0)
           {
               if(a[i]%2==0)
                v.push_back(a[i]);
               else
               {
                   a[i]-=a[0];
                   v.push_back(a[i]);
               }
           }
           else
           {
               if(a[i]%2!=0)
                v.push_back(a[i]);
               else
               {
                   a[i]-=a[0];
                   v.push_back(a[i]);
               }
           }
        }
        ll e1=0,od1=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]%2==0)
                e1++;
            else
                od1++;
        }
        if(od1==n||e1==n)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }

}
