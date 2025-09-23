
//A

// #include<bits/stdc++.h>
// #define ll ll int
// using namespace std;
// int main()
// {
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         ll a1,a2,a4,a5;
//         cin>>a1>>a2>>a4>>a5;
//         ll mx=0;
//         for(int i=-100;i<=100;i++)
//         {
//           ll a3=i;
//           ll cn=0;
//           if(a1+a2==a3)
//           cn++;
//           if(a2+a3==a4)
//           cn++;
//           if(a3+a4==a5)
//           cn++;
//           mx=max(cn,mx);
//         }
//         cout<<mx<<endl;
//     }
// }


// #include<bits/stdc++.h>
// #define ll ll int
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//        ll n,k;
//        cin>>n>>k;
//        vector<ll>v(n);
//        for(int i=0;i<n;i++)
//        {
//         cin>>v[i];
//        } 
//        sort(v.begin(),v.end());
//        ll l=0,r=n-1;
//        ll score=0;
//        while(l<r)
//        {
//         if(v[l]+v[r]==k)
//         {
//             score++;
//             l++,r--;
//         }
//         else if(v[l]+v[r]>k)
//         r--;
//         else if(v[l]+v[r]<k)
//         l++;

//        }
//        cout<<score<<endl;
//     }
// }


#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; 
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
         
        ll x = a[0]; 
        bool ok = true;
        for(ll i = 1; i < n; i++)
        {
            if(x > a[i])
            { 
                ok = false;
                break;
            }
        
            x = a[i] - x;
        }
        
        if(ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}