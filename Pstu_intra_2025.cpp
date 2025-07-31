// #include <bits/stdc++.h>
// #define ll long long int
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
//         for(int i=0;i<n;i++)
//         cin>>v[i];

//         for (int i = 0; i + 2 < n-1;) 
//         {
//           if (v[i + 1] > v[i + 2]) 
//           {
//           swap(v[i + 1], v[i + 2]);
//           i+=3;
//           }
//           else
//           i++;
//         }
//         for(auto a:v)
//         cout<<a<<" ";
//         cout<<endl;
        
//     }

//     return 0;
// }



#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) 
    {
        ll n;
        cin >> n;
        vector<ll> a;
        for (int i = 1; i < n; i++) 
        {
            a.push_back(i);
        }
        ll l=1;
        for(int i=1;i<n;i++)
        {
            l=lcm(l,1LL*i);
        }
        a.push_back(l);
        cout << n << '\n';
        for (auto val : a) {
            cout << val << ' ';
        }
        cout << '\n';

    }
    return 0;
}

