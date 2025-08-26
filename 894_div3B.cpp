// #include<bits/stdc++.h>
// #define ll ll int
// using namespace std;
// int main()
// {
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         ll n;
//         cin>>n;
//         ll a[n+2];

//         for(int i=0;i<n;i++)
//         {
//             cin>>a[i];
//         }
//         if(is_sorted(a,a+n))
//         {
//             cout<<n<<endl;
//             for(int i=0;i<n;i++)
//                 cout<<a[i]<<' ';
//             cout<<endl;
//             continue;
//         }
//         vector<ll>v;
//         v.push_back(a[0]);
//         for(int i=1;i<n;i++)
//         {
//            if(a[i]>=a[i-1])
//                 v.push_back(a[i]);
//            else
//            {
//             v.push_back(1);
//             v.push_back(a[i]);
//            }

//         }
//         cout<<v.size()<<endl;
//         for(int i=0;i<v.size();i++)
//         {
//             cout<<v[i]<<' ';
//         }
//         cout<<endl;
//     }
// }


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
        vector<ll>v(n+1);
        map<ll,ll>mp1,mp2;
        for(int i=1;i<=n;i++)
        {
         ll x;
         cin>>x;
         v[i]=x;
         mp1[i]=x;
         mp2[x]=i;
        }

        if(v[1]!=n)
        {
            cout<<"NO\n";
            continue;
        }
        bool f=true;
        for(int i=1;i<=n;i++)
        {
            ll t=v[i];
            ll l=mp1[t];
            ll u=mp2[l];
            if(t!=u)
            {
                //cout<<"NO\n";
                f=false;
                break;
            }
        }
        if(f)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}
