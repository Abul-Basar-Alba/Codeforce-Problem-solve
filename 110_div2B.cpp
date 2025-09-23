#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+2];
        vector<ll>v;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                v.push_back(a[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]%2!=0)
                v.push_back(a[i]);
        }
        ll ans=0;
        for(int i=0;i<n;i++)
        {
           if(v[i]%2==0)
                ans=ans+(n-i-1);
           else
           {

               for(int j=i+1;j<n;j++)
               {
                  ll g=(__gcd(v[i],2*v[j]));
                   if(g>1)
                ans+=g;
               }
           }
        }
        cout<<ans<<endl;
    }
}
/*#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        vector<ll> even, odd;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                even.push_back(a[i]);
            else
                odd.push_back(a[i]);
        }

        ll ans = 0;

        for (int i = 0; i < even.size(); i++)
        {
            ans += n-i-1;
        }

        for (int i = 0; i < odd.size(); i++)
        {
            for (int j = i + 1; j < odd.size(); j++)
            {
                if (__gcd(odd[i], 2 * odd[j]) > 1)
                    ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}*/

