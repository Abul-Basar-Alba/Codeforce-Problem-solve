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
        ll a[n+2];
        for(int i=0;i<n;i++)
         cin>>a[i];
         map<ll,ll>mp;
         for(int i=0;i<n;i++)
            mp[a[i]]++;
        ll mx=0;
         for(int i=0;i<=n;i++)
         {
            if(mp[i]==0)
            {
                mx=i;
                break;
            }
         }
         ll fst=0;
         for(int i=0;i<=n;i++)
         {
             if(mp[i]==1)
             {
                 fst=i;
                 break;
             }
         }
         ll s=0;
         for(int i=fst+1;i<=n;i++)
         {
            if(mp[i]<=1)
            {
                s=i;
                break;
            }
         }
          mx=min(s,mx);
          cout<<mx<<endl;
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
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll>v(n);
        for (int i = 0; i < n; i++)
            cin >>v[i];

        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
            mp[v[i]]++;

        ll mx = 0;
        for (int i = 0; i <= n; i++)
        {
            if (mp[i] == 0)
            {
                mx = i;
                break;
            }
        }

        ll fst = 0;
        for (int i = 0; i <= n; i++)
        {
            if (mp[i] == 1)
            {
                fst = i;
                break;
            }
        }

        ll s = 0;
        for (int i = fst + 1; i <= n; i++)
        {
            if (mp[i] <= 1)
            {
                s = i;
                break;
            }
        }

        mx = min(s, mx);
        cout << mx << endl;
    }
    return 0;
}*/

