//A. Twice

// #include <bits/stdc++.h>
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
//         ll n;
//         cin>>n;
//         vector<ll>v(n);
//         for(int i=0;i<n;i++)
//         {
//             cin>>v[i];
//         }
//         map<ll,ll>mp;
//         for(int i:v)
//          mp[i]++;


//         ll res=0;
//         for(auto it:mp)
//         {
//           res+=(it.second/2);
//         }
//         cout<<res<<endl;
//     }
// }

//C. Superultra's Favorite Permutation

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;
// bool isPrime(int n) 
// {
//     if (n <= 1) return false;     
//     if (n <= 3) return true;       
//     if (n % 2 == 0 || n % 3 == 0) return false; 

//     for (int i = 5; i * i <= n; i += 6) 
//     {
//         if (n % i == 0 || n % (i + 2) == 0)
//             return false;
//     }
//     return true;
// }
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

//         vector<ll> res;
//          if (n<5) 
//         {
//             cout << -1 << endl;
//         } 
//         else 
//         {
//            for (int i = 1; i <= n; i += 2) 
//             {
//                 res.push_back(i);
//             }
//             ll odd=0;
//             if(n%2==1)
//             odd=n;
//             else
//             odd=n-1;
//             stack<ll>st;
//             bool ok=true;
//             for(int i = 2; i <= n; i += 2) 
//             {
//                 if(!isPrime(odd+i)&&ok==true)
//                 {
//                 res.push_back(i);
//                 ok=false;
//                 }
//                 else if(ok==true)
//                 st.push(i);
//                 else
//                 res.push_back(i);
//             }
//             while(!st.empty())
//             {
//                 ll c=st.top();
//                 st.pop();
//                 res.push_back(c);
//             }
//         for (ll x : res) 
//         {
//             cout << x << " ";
//         }
//         cout << endl;
//         }
//     }

//     return 0;
// }

//B. Intercepted Inputs
#include <bits/stdc++.h>
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
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll k=n-2;
        bool f=false;
        for(int i=0;i<n;i++)
        {
            ll l=i+1,r=n-1;
            ll tem=v[i];
            while(l<=r)
            {
                ll mid=(l+r)/2;
                ll ok=v[mid]*tem;
              if(ok==k)
              {
                f=true;
                cout<<tem<<" "<<v[mid]<<endl;
                break;
              }
              else if(ok<k)
              l=mid+1;
              else
              r=mid-1;

            }
            if(f)
            break;
        }
    }
}