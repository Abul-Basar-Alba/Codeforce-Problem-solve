
//L. Ammar-utiful Permutations

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;
// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin>>n;
//         for(int i=1;i<=n;i++)
//         {
//           if(i%2!=0)
//           cout<<i<<" ";
//         }
//         for(int i=1;i<=n;i++)
//         {
//             if(i%2==0)
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }


// J. Resli-utiful Pair

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;
// int main()
// {
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//     ll n;
//     cin>>n;
//     ll a=n+1;
//     ll b=2;
//     cout<<a<<" "<<b<<endl;
//    }
// }

//C. Elias-utiful Array

#include <bits/stdc++.h>
#define ll ll int
using namespace std;
ll maxpos(ll x) 
{
    ll pos = 0;
    while (x > 0) 
    {
        pos++;
        x >>= 1;
    }
    return pos;
}
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {

        ll n;
        cin >> n;
        vector<ll> a(n);
        
        for (int i = 0; i <n; i++) 
        {
            cin >> a[i];
        }
        
        map<ll, vector<ll>> mp;
        
        for (int num : a) 
        {
            int bitPos = maxpos(num);
            mp[bitPos].push_back(num);
        }
        
        ll mx = 0;
        
        for (const auto& it : mp) 
        {
            ll cnt = it.second.size();
            mx = max(mx, cnt);
        }
        
        cout << mx << endl;
    }
    
    return 0;
}

