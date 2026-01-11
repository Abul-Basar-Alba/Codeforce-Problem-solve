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

// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long


// ll base_of_bit(ll n) 
// {
//     ll val = 1, step = 2;
//     for (ll i = 1; i < n; i++) 
//     {
//         val += step;
//         step *= 2;
//     }
//     return val;
// }

// void solve() 
// {
//     ll n;
//     cin >> n;
//     vector<ll> ans;

//     // Count number of bits in n
//     ll bit_count = log2(n) + 1;

//     if (n % 2 == 0) 
//     {
//         ll base = base_of_bit(bit_count - 1);

//         // Fill values skipping base and base - 1
//         for (ll i = 2; i < n; i++) 
//         {
//             if (i == base || i == base - 1) 
//             continue;
//             ans.push_back(i);
//         }

//         ans.push_back(1);
//         ans.push_back(base - 1);
//         ans.push_back(base);
//         ans.push_back(n);
//     } 
//     else 
//     {
//         ans.push_back(2);
//         ans.push_back(1);
//         for (int i = 3; i <= n; i++) 
//         {
//             ans.push_back(i);
//         }
//     }

//     ll k = ans[0];
//     for (ll i = 1; i < ans.size(); i++) 
//     {
//         if (i % 2 == 0)
//             k &= ans[i];
//         else
//             k |= ans[i];
//     }

//     cout << k << '\n';
//     for (auto x : ans) cout << x << ' ';
//     cout << '\n';
// }

// int32_t main() 
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t;
//     cin >> t;
//     while (t--) 
//     {
//         solve();
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

#define int long long

int greatestPowerOfTwo(int n) 
{
    int p = 1;
    while (p * 2 <= n) 
    p *= 2;
    return p;
}

void solve() 
{
    int n; cin >> n;

    vector<int> ans;

    if (n % 2 == 1) 
    {
        ans.push_back(2);
        ans.push_back(1);
        for (int i = 3; i <= n; i++) 
        ans.push_back(i);
    } 
    else 
    {
        int v = greatestPowerOfTwo(n);
    
        for (int i = 2; i < n; i++) 
        {
            if (i == v - 1 || i == v - 2|| i == 1) 
            continue;
           ans.push_back(i);
        }
        ans.push_back(1);
        ans.push_back(v - 2);
        ans.push_back(v - 1);
        ans.push_back(n);
       
    }

  
    int k = ans[0];
    for (int i = 1; i < n; i++) 
    {
        if (i % 2 == 0)
            k &= ans[i];
        else
            k |= ans[i];
    }

    cout << k << "\n";
    for (int x : ans) cout << x << " ";
    cout << "\n";
}

int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) solve();

    return 0;
}


cp