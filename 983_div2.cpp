// #include <bits/stdc++.h>
// #define all(v) (v).begin(), (v).end()
// #define srt(v) sort(all(v))
// #define rsrt(v) sort(all(v), greater<ll>())

// using namespace std;
// typedef long long ll;

// void solve()
// {
//     ll n;
//     cin >> n;
//     vector<ll> v(2*n);
//     ll zero=0,one=0;
//     for(int i=0;i<2*n;i++)
//     {
//       cin>>v[i];
//       if(v[i]==0)
//       zero++;
//       else
//       one++;
//     }
//     if(zero%2!=0)
//     {
//       cout<<1<<" "<<min(zero,one)<<endl;
//     }
//     else
//     {
//       cout<<0<<" "<<min(zero,one)<<endl;
//     }
    
  

// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

        

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
//         vector<ll>v(n);
//         for(int i=0;i<n;i++)
//         cin>>v[i];
//         sort(v.begin(),v.end());
//         ll cnt=0;
//         for(int i=0;i<n;i++)
//         {
//           if(v[n-1]>=2*v[i])
//           cnt++;
//           else
//           break;
//         }
//         cout<<cnt<<endl;
//     }
// }

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
//         vector<int> a(n);
        
//         for (int i = 0; i < n; ++i) 
//         {
//             cin >> a[i];
//         }

//         sort(a.begin(), a.end());

//         set<int> dis(a.begin(), a.end());
        
//         if (dis.size() < 2) 
//         {
//             cout << n - 1 << endl; 
//             continue;
//         }

//         auto it = dis.end();
//         it--;
//         int max1 = *it;
//         it--;
//         int max2 = *it; 

//         int need= 0;
//         for (int i = 0; i < n; ++i) 
//         {
//             if (a[i] != max1 && a[i] != max2) 
//             {
//                 need++;
//             }
//         }

//         cout << need << endl; 
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// #define all(v) (v).begin(), (v).end()
// #define srt(v) sort(all(v))
// #define rsrt(v) sort(all(v), greater<ll>())

// using namespace std;
// typedef long long ll;

// void Basar()
// {
//   ll n,k;
//   cin>>n>>k;
//   if(n==1)
//   {
//     cout<<1<<endl;
//     cout<<1<<endl;
//     return;
//   }
//   if((k==n && n!=1)||(n!=1&&k==1))
//   {
//     cout<<-1<<endl;
//   }
//   else
//   {
//     if(k%2==0)
//     {
//     cout<<3<<endl;
//     cout<<1<<" "<<k<<" "<<k+1<<endl;
//     }
//     else
//     {
//       cout<<3<<endl;
//     cout<<1<<" "<<k-1<<" "<<k+2<<endl;
//     }
//   }
    
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t = 1;
//     cin >> t;
//     while (t--)
//     {
//         Basar();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void Basar()
{
  ll n;
  cin>>n;
  vector<ll>a(n);
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  sort(a.begin(),a.end());
  ll r=0;
  ll res=n;
  for(int l=0;l+1<n;l++)
  {
    while(r<n&&a[r]<a[l]+a[l+1])
    r++;
   res=min(res,(n-(r-l)));
  }
  cout<<res<<endl;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        Basar();
    }
    return 0;
}