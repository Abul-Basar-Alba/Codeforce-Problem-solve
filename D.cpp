/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //sort(a,a+n);
    for(int i=0;i<n/2;i++)
    {

    }
}*/
#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--)
    {
       ll n;
       cin>>n;
       vector<int>v(n);
       for(int i=0;i<n;i++)
       {
           cin>>v[i];
       }
       bool ok=true;
       for(int i=0;i<n-1;i++)
       {
           ll x=abs(v[i]-v[i+1]);
           if(x==5||x==7)
           {
               continue;
           }
           else
           {
               ok=false;
               break;
           }
       }
       if(ok)
       cout<<"YES\n";
       else
       cout<<"NO\n";
    }

    return 0;
}
