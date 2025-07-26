
//A: Easy Problem

// #include <bits/stdc++.h>
// #define ll ll
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
//         cout<<n-1<<endl;
//     }
// }

//B: Normal Problem

// #include <bits/stdc++.h>
// #define ll ll
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         string s;
//         cin>>s;
//         reverse(s.begin(),s.end());
//         for(int i=0;i<s.size();i++)
//         {
//             if(s[i]=='p')
//             s[i]='q';
//             else if(s[i]=='q')
//             s[i]='p';
//         }
//         cout<<s<<endl;
//     }
// }

//C: Hard Problem

// #include <bits/stdc++.h>
// #define ll ll
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         ll m,a,b,c;
//         cin>>m>>a>>b>>c;
        
//         ll empty=0;
//         if(a>m)
//         a=m;
//         empty+=(m-a);
//         if(b>m)
//         b=m;
//         empty+=(m-b);
//         c=min(empty,c);
//         cout<<a+b+c<<endl;


//     }
// }

//D: Harder Problem

// #include <bits/stdc++.h>
// #define ll ll
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
//         vector<ll> v(n);
//         set<ll> s;

//         for (int i = 1; i <= n; i++) 
//         {
//             cin >> v[i-1];
//             s.insert(i);
//         }
        
//         for(int i=0;i<n;i++)
//         {
//             if(s.find(v[i])!=s.end())
//             {
//                 cout<<v[i]<<" ";
//                 s.erase(v[i]);
//             }
//             else
//             {
//                 cout<<*s.begin()<<" ";
//                 s.erase(s.begin());
//             }
//         }
//         cout<<endl;
//     }

//     return 0;
// }

//E: Insane Problem

#include <bits/stdc++.h>
#define ll ll
using namespace std;

ll _count(ll k, ll l1, ll r1, ll l2, ll r2) 
{
    ll cn = 0;

    for (int i = 0; i <= 32; ++i) 
    {
        ll kn = pow(k, i);
        
  
        ll minX = (l2 + kn - 1) / kn; 
        ll maxX = r2 / kn; 

        ll validL = max(minX, l1);
        ll validU = min(maxX, r1);

        if (validL <= validU) 
        {
            cn += (validU - validL+ 1);
        }
    }

    return cn;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--) 
    {
        ll k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;

        cout << _count(k, l1, r1, l2, r2) << endl;
    }
    return 0;
}


