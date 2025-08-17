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
//       ll n;
//         cin>>n;
//       vector<ll> v(n);
//       ll z=0,o=0,tw=0,th=0,fi=0;
//         for(ll i=0;i<n;i++)
//         {
//             cin>>v[i];
//             if(v[i]==0)
//             {
//                 z++;
//             }
//             else if(v[i]==1)
//             {
//                 o++;
//             }
//             else if(v[i]==2)
//             {
//                 tw++;
//             }
//             else if(v[i]==3)
//             {
//                 th++;
//             }
//             else if(v[i]==5)
//             {
//                 fi++;
//             }
//         }
//         if(z<3||o<1||tw<2||th<1||fi<1||n<8)
//         {
//             cout<<0<<endl;
//             continue;
//         }
//         ll n_z=3,n_o=1,n_tw=2,n_th=1,n_fi=1;
//         ll ans=0;
//         for(ll i=0;i<n;i++)
//         {
            
//             if(v[i]==0&&n_z>0)
//             {
//                 n_z--;
//             }
//             else if(v[i]==1&&n_o>0)
//             {
//                 n_o--;
//             }
//             else if(v[i]==2&&n_tw>0)
//             {
//                 n_tw--;
//             }
//             else if(v[i]==3&&n_th>0)
//             {
//                 n_th--;
//             }
//             else if(v[i]==5&&n_fi>0)
//             {
//                 n_fi--;
//             }
//             if(n_z==0&&n_o==0&&n_tw==0&&n_th==0&&n_fi==0)
//             {
//                 ans=i+1;
//                 cout<<ans<<endl;
//                 break;
//             }
            
//         }

//     }
//   }


#include <bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);

    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int teams = 0, members = 0;

    for (int i = n - 1; i >= 0; i--) 
    {
        members++; 
        if (members * a[i] >= x) 
        { 
            teams++;   
            members = 0; 
        }
    }

    cout << teams << "\n"; 
}

int main() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) 
    {
        solve();
    }

    return 0;
}
