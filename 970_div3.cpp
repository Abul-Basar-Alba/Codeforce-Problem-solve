// #include<bits/stdc++.h>
// #define ll ll int
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//     ll n;
//     cin>>n;
//     string s;
//     cin>>s;
//     ll r=sqrt(n);
//     if(r*r!=n)
//     {
//         cout<<"NO\n";
//         continue;
//     }
//     ll z=r-2;
//     z=z*z;
//     ll cn=0;
//     for(int i=0;i<n;i++)
//     {
//         if(s[i]=='0')
//         cn++;
//     }
//     if(cn==z)
//     cout<<"YES\n";
//     else
//     cout<<"NO\n";
//    }
// }


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
//         ll l,r;
//         cin>>l>>r;
//         ll ans=1;
//         for(int i=1;;i++)
//         {
//             l+=i;
//             if(l>r)
//             break;
//             ans++;
//         }
//         cout<<ans<<endl;
//     }
// }

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
//         ll l,r;
//         cin>>l>>r;
//         //vector<ll>v;
//         ll f=0;
//         ll res=0;
//         while(l<=r)
//         {
//           res++;
//           f++;
//           l+=f;
//         }
//         cout<<res<<endl;
//     }
// }


// #include<bits/stdc++.h>
// #define ll ll int
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//     ll n;
//     cin>>n;
//     string s="aeiou";
//     string res;
    
//     for(int i=1;i<=n;i++)
//     {
//         if(i%5==1)
//         res+='a';
//         else if(i%5==2)
//         res+='e';
//         else if(i%5==3)
//         res+='i';
//         else if(i%5==4)
//         res+='o';
//         else if(i%5==0)
//         res+='u';
//     }
//     sort(res.begin(),res.end());
//     cout<<res<<endl;
    
//    }
// }


#include<bits/stdc++.h>
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
    vector<ll>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll cn=0,ans=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]>=k)
        {
        ans+=v[i];
        }
        else if(v[i]==0&&ans!=0)
        {
            cn++;
            ans--;
        }
        
    }
    cout<<cn<<endl;
   }
}

