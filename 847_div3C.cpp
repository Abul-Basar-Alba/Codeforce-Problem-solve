/*#include<bits/stdc++.h>
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
    ll a[n][n-1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-1;j++)
        {
            cin>>a[i][j];
        }
    }
    ll dif=a[1][n-1];
    ll tem=0,f=0,ind=0;
   for(int i=2;i<=n;i++)
   {
    for(int j=2;j<=n-1;j++)
    {
        if(a[i][n-1]==dif&&tem==0)
        {
          f=1;
        }
        if(f==1&&a[i][n-1]!=dif)
        {
            dif=a[i][n-1];
            ind=i;
            break;
        }
        if(a[i][n-1]!=dif&&tem==0)
        {
        tem=dif;
        ind=i;
        dif=a[i][n-1];
        }
        if(tem!=0&&dif==a[i][n-1])
        {
          dif=tem;
          break;
        }
        else if(tem==a[i][n-1]&&dif!=a[i][n-1])
        {
          ind=i-1;
          break;
        }

    }
   }
   vector<ll>v;
   for(int i=1;i<=n;i++)
   {
     for(int j=1;j<=n-1;j++)
     {
        v.push_back(a[ind][j]);
     }
   }
   ll sum=0,x=n*(n+1)/2;
   for(ll i=1;i<=n;i++)
   {
    sum+=v[i];
   }
   ll r=x-sum;
   v.push_back(r);
   for(int i=0;i<n;i++)
   cout<<v[i]<<' ';
   cout<<endl;
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
        cin >> n;

        //vector<vector<ll>>a(n, vector<ll>(n-1));
        ll a[n][n-1];

        for (ll i = 0; i < n;i++)
        {
            for (ll j = 0; j < n-1;j++)
            {
                cin >> a[i][j];
            }
        }

         map<ll, ll> freq;
        for (ll i = 0; i < n;i++)
        {
            freq[a[i][n-2]]++;
        }

        ll dif = -1;
        for (const auto &pair : freq)
        {
            if (pair.second == 1)
            {
                dif = pair.first;
                break;
            }
        }
        vector<ll> v;
        ll ind = -1;
        for (ll i = 0; i < n; ++i)
        {
            if (a[i][n-2] == dif)
            {
                ind = i;
                break;
            }
        }

        for (ll j = 0; j < n-1;j++)
        {
            v.push_back(a[ind][j]);
        }

        ll x = n * (n + 1) / 2;
        ll sum =0;//accumulate(v.begin(), v.end(), 0LL);
        for(ll i=0;i<v.size();i++)
         {
           sum+=v[i];
         }
        ll r = x - sum;

        v.push_back(r);

        for (ll i = 0; i < n;i++)
        {
            cout << v[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}
