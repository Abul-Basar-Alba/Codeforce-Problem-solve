//A.Minimal Coprime

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
    
//         ll t;
//         cin>>t;
//         while(t--)
//         {
//             ll x,y;
//             cin>>x>>y;
//             if(x==1&&y==1)
//             cout<<1<<endl;
//             else
//             cout<<y-x<<endl;
//         }
    
// }


//B.Subsequence Update

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
    
//         ll t;
//         cin>>t;
//         while(t--)
//         {
//             ll n,l,r;
//             cin>>n>>l>>r;
//             vector<ll>x,y,z;
           
//             for(int i=1;i<=n;i++)
//             {
//                 ll c;
//                 cin>>c;
//                 if(i<l)
//                 x.push_back(c);
//                 else if(i<=r)
//                 y.push_back(c);
//                 else
//                 z.push_back(c);
//             }
//             sort(x.begin(),x.end());
//               sort(y.rbegin(),y.rend());
//             sort(z.begin(),z.end());
//        ll ans1=0,ans2=0;
//        for(int i=0;i<y.size();i++)
//        {
//         if(i<x.size())
//         ans1+=min(x[i],y[i]);
//         else
//         ans1+=y[i];
//         if(i<z.size())
//         ans2+=min(z[i],y[i]);
//         else
//         ans2+=y[i];
//        }

//        cout<<min(ans1,ans2)<<endl;


//     }
//     return 0;
// }
           

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
            ll n,l,r;
            cin>>n>>l>>r;
            vector<ll>a(n);
            for(int i=0;i<n;i++)
            cin>>a[i];
            l--,r--;
            vector<ll>x,y;
            for(int i=0;i<=r;i++)
            x.push_back(a[i]);
            for(int i=l;i<n;i++)
            y.push_back(a[i]);
            sort(x.begin(),x.end());
            sort(y.begin(),y.end());
            ll res1=0,res2=0;
            for(int i=0;i<(r-l+1);i++)
            {
              res1+=x[i];
              res2+=y[i];
            }
            cout<<min(res1,res2)<<endl;
        }
}