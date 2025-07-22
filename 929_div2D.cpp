#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
       ll n;
       cin>>n;
       vector<ll>a(n+2);
       map<ll,ll>mp;
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
           mp[a[i]]++;
       }
       ll c=0;
       //ll mx=*max_element(a.begin(),a.end());
       ll mn=*max_element(a.begin(),a.end());
       //ll x=a[0]%a[1];
       if(mp[mn]==1)
        cout<<"YES\n";
       else
       {
           for(int i=0;i<n;i++)
           {
              if(a[i]%mn!=0)
                c=1;
           }
           if(c==1)
            cout<<"YES\n";
           else
            cout<<"NO\n";
       }
    }
}
/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
       ll n;
       cin >> n;
       map<ll,ll>mp;
       if(n < 2)
        {
           cout << "NO\n";
           continue;
       }

       vector<ll> a(n);

       ll f = 1, f1 = 1, cn = 0,c=0;

       for(int i = 0; i < n; i++)
       {
           cin >> a[i];
           mp[a[i]]++;
           if(a[i] == 1)
            cn++;
       }

       ll mx = *max_element(a.begin(), a.end());
       ll mn = *min_element(a.begin(), a.end());
        if(mx == mn||cn>=2)
        {
           cout << "NO\n";
           continue;
       }
       ll x = a[0] % a[1];
       for(int i = 2; i < n; i++)
       {
           x = x % a[i];
           if(x == 0)
            f = 0;
       }

       reverse(a.begin(), a.end());

       ll y = a[0] % a[1];
       for(int j = 2; j < n; j++)
       {
           y = y % a[j];
           if(y == 0)
            f1 = 0;
       }

       if(f == 1 || f1 == 1||mp[mn]==1)
        cout << "YES\n";
       else
       {
          for(int i=0;i<n;i++)
          {
              if(a[i]%mn!=0)
                c=1;
          }
          if(c==1)
            cout<<"YES\n";
          else
            cout << "NO\n";
       }

    }
    return 0;
}*/

