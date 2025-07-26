// #include <bits/stdc++.h>
// using ll = ll;
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t; 
//     cin >> t;
//     while(t--)
//     {
//         ll n;
//         cin >> n;
//         vector<ll> b(n);
//         for(ll i = 0; i < n; i++)
//         {
//             cin >> b[i];
//         }
//         bool found = false;
//         for(ll i = 0; i < n; i++)
//         {
//             for(ll j=i+1;j<n;j++)
//             {
//                 if(b[i]>b[j])
//                 {
//                     found = true;
//                     cout << "Yes\n";
//                     cout << 2 << "\n";
//                     cout << b[i] << " " << b[j] << "\n";    
//                     break;
//                 }

//             }
//             if(found)
//                 break;
//         }
//         if(!found)
//         cout << "No\n";


//     }

// }


#include <bits/stdc++.h>
using namespace std;
using ll = ll;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout<<min(a[0]+a[1],2*a[0])<<"\n";
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// using ll = ll;


// ll gcd(ll a, ll b) {
//     while (b != 0) {
//         ll temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }


// ll lcm(ll a, ll b) {
//     return (a / gcd(a, b)) * b;
// }

// int main() {
    
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     for (int test = 0; test < t; test++) {
//         int n;
//         cin >> n; 
//         vector<ll> b(n);
//         for (int i = 0; i < n; i++) {
//             cin >> b[i]; 
//         }

//         ll result = 1; 
        
//         for (int i = 0; i < n - 1; i++) {
//             if (b[i + 1] % b[i] != 0) { 
//                 ll d = gcd(b[i], b[i + 1]);
//                 ll m = b[i] / d;
//                 result = lcm(result, m);
//             }
//         }
//         cout << result << "\n"; 
//     }
//     return 0;
// }