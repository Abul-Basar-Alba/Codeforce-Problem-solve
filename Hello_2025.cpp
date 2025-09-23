
//A. MEX Table

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
//         ll n,m;
//         cin>>n>>m;
//         if(m>=n)
//         cout<<m+1<<endl;
//         else
//         cout<<n+1<<endl;
//     }
// }

//B. Gorilla and the Exam

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
//         ll n,k;
//         cin>>n>>k;
//         vector<ll>v(n);
//         for(int i=0;i<n;i++)
//         {
//             cin>>v[i];
//         }
//         map<ll,ll>mp;
//         for(auto c:v)
//         {
//             mp[c]++;
//         }
//         vector<pair<ll,ll>>mp_s;
//         for(auto p:mp)
//         {
//             mp_s.push_back(p);
//         }
//         sort(mp_s.begin(),mp_s.end(),[](const auto& a,const auto& b){
//             return a.second<b.second;
//         });
    
//             for(int i=0;i<mp_s.size();i++)
//             {
//                 if(k>=mp_s[i].second)
//                 {
//                 k-=mp_s[i].second;
//                 mp_s[i].second=0;
//                 }
//                 else 
//                 break;
//             }
//         ll rem = 0;
//         for (const auto& p : mp_s) 
//         {
//             if (p.second > 0) 
//             {
//                 rem++;
//             }
//         }

//         cout << max(1LL,rem) << endl;
//     }
// }


//A. Tender Carpenter (Good by 2024)

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
        vector<ll>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        bool ok=true;
        for(int i=0;i<n-1;i++)
        {
            ll mx=max(a[i],a[i+1]);
            ll mn=min(a[i],a[i+1]);
            if(2*mn>mx)
            {
                ok=false;
                break;
            }
        }
        if(!ok)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
}

