//C. Penchick and BBQ Buns

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         if (n % 2 == 0)
//         {
//             for (int i = 1; i <= n / 2; i++)
//                 cout << i << ' ' << i << ' ';
//             cout << endl;
//         }
//         else
//         {
//             if (n <= 25)
//                 cout << -1 << endl;
//             else
//             {
//                 cout << "1 2 2 3 3 4 4 5 5 1 6 6 7 7 8 8 9 9 10 10 11 11 12 13 13 1 12 ";
//                 n -= 27;
//                 for (int i = 1; i <= n / 2; i++)
//                     cout << i + 13 << ' ' << i + 13 << " ";
//                 cout << endl;
//             }
//         }
//     }
//     return 0;
// }


//B. Penchick and Satay Sticks

// #include <bits/stdc++.h>
// #define ll ll int 
// using namespace std;
 
// int main()
// {
//   ll t;
//   cin >> t;
//   while (t--)
//   {
//     ll n;
//     cin >> n;
//     vector<ll> v(n);
    
//     for (int i = 0; i < n; i++)
//     {
//       cin >> v[i];
//     }
    
//     if (is_sorted(v.begin(), v.end()))
//     {
//       cout << "YES\n";
//       continue;
//     }
    
//     bool ok = true;
//     for (int i = 0; i < n - 1; i++)
//     {
//       if (v[i] > v[i + 1] && v[i] - v[i + 1] > 1)
//       {
//         ok = false;
//         break;
//       }
//       else if (v[i] > v[i + 1] && v[i] - v[i + 1] <= 1)
//       {
        
//         swap(v[i], v[i + 1]);
//       }
//     }
//     if (ok && is_sorted(v.begin(), v.end()))
//     {
//       cout << "YES\n";
//     }
//     else
//     {
//       cout << "NO\n";
//     }
//   }
// }

//A. Penchick and Modern Monument

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
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
      cin>>v[i];
    }
    map<ll,ll>mp;
    for(int i:v)
    {
      mp[i]++;
    }
    ll res=0;
    ll ans=0;
    for(auto i:mp)
    {
      if(res<i.second)
       {
        res=i.second;
        ans=i.first;
       }
    }
    cout<<n-res<<endl;
  }
}