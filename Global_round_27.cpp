// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t;
//     cin >> t;
//     while (t--) 
//     {
//         ll n,m,r,c;
//         cin>>n>>m>>r>>c;
//         ll ans=(m-c);
//         ans+=((n-r)*m);
//         ans+=((n-r)*(m-1));
//         cout<<ans<<endl;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t;
//     cin >> t;
//     while (t--) 
//     {
//        ll n;
//        cin>>n;
//        if(n==1||n==3)
//        {
//         cout<<-1<<endl;
//        }
//        else
//        {
//         string s="";
//         if(n%2==0)
//         {
//             ll x=n-2;
//             for(int i=0;i<x;i++)
//              s+='3';
//            s+="66";
//            cout<<s<<endl;
//         }
//         else
//         {
//             ll x=n-5;
//             for(int i=0;i<x;i++)
//             {
//                 s+='3';
//             }
//             s+="36366";
//             cout<<s<<endl;
//         }
//        }
//     }
// }


#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        
        ll M = 1LL << (63 - __builtin_clzll(n));
       
        ll R = (M << 1) - 1;
        
        ll k_max = (n % 2 == 0 ? R : (R & n));
        cout << k_max << "\n";

        vector<ll> p(n);
        iota(p.begin(), p.end(), 1);

        if(n % 2 == 0){

            ll idxM   = M-1;    
            ll idxM1  = (M-1)-1; 
            swap(p[idxM],   p[n-2]);
         
            if(idxM1 == n-2) idxM1 = idxM;
            swap(p[idxM1],  p[n-1]);
        }
         else 
        {

            ll idxN   = n-1;     
            ll idxM1  = (M-1)-1; 
            swap(p[idxN],   p[n-2]);
            
            if(idxM1 == n-2) idxM1 = idxN;
            swap(p[idxM1],  p[n-1]);
        }

  
        for(int x : p)
            cout << x << ' ';
        cout << "\n";
    }
    return 0;
}
