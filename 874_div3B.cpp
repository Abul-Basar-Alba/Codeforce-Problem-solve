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
     ll n,k;
     cin>>n>>k;
     vector<ll>a(n),b(n);
     for(int i=0;i<n;i++)
     {
       cin>>a[i]>>b[i];
     }
     sort(b.begin(),b.end());
     vector<ll>v;
     ll i=0,j=0;
     while(i<n&&b.size()!=0)//to pointer concept
     {
         ll gap=abs(a[i]-b[j]);
         if(gap<=k)
         {
             v.push_back(b[j]);
             b.pop_back();
             i++;
             j=0;
         }
         else
         {
             j++;
         }
     }
     for(int i=0;i<n;i++)
        cout<<v[i]<<' ';
     cout<<endl;
    }
}*/
#include<bits/stdc++.h>
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
        ll n, k;
        cin >> n >> k;

        vector<pair<ll,ll>>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i].first;
            a[i].second=i;
        }
        sort(a.begin(),a.end());
        vector<ll>b(n);
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(b.begin(),b.end());
        vector<ll>ans(n);
        for(int i=0;i<n;i++)
        {
            ans[a[i].second]=b[i];
        }
        for(int i=0;i<n;i++)
            cout<<ans[i]<<' ';
        cout<<endl;
    }

    return 0;
}
