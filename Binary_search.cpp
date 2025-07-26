#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    for (int i = 0; i < k; i++)
    {
        ll x;
        cin >> x;
        ll l = 0, h = n - 1;
        ll mx =0, ans = 0;
        while (l <= h)
        {
            ll mid = (l + h) / 2;
            if (v[mid] <=x)
            {
                l= mid;
                mx = max(mx, mid);
            }
           else
                h= mid-1;
        }
        if(mx>0)
        ans =mx+1;
        cout << ans << endl;

    }
    return 0;
}
/*
#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());

    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        ll ans = 0;
        auto ind = upper_bound(v.begin(), v.end(), x) - v.begin();
        if (ind > 0)
            ans = ind;
        cout << ans << endl;
    }
    return 0;
}

*/
//A. Binary Search

/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    for(int i=0;i<k;i++)
    {
        ll x;
       cin>>x;
    ll l=0,h=n-1,f=0;
     while(l<=h)
     {
        ll mid=(l+h)/2;
        if(v[mid]==x)
        {
            f=1;
            break;
        }
        else if(v[mid]>x)
            h=mid-1;
        else
            l=mid+1;
     }
     if(f==1)
        cout<<"YES\n";
     else
     cout<<"NO\n";

    }
}
*/
