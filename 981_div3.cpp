// #include<bits/stdc++.h>
// #define ll long long int 
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//         ll n;
//         cin>>n;
//         ll a[n][n];
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 cin>>a[i][j];
//             }
//         }
//        ll sum=0;
//        for(int k=0;k<n;k++)
//        {
//         ll i=0,j=k,mn=0;
//         while(i<n&&j<n)
//         {
//             if(a[i][j]<0)
//             mn=min(mn,a[i][j]);
//             i++,j++;
//         }
//         sum+=abs(mn);
//        }
//        for(int k=1;k<n;k++)
//        {
//         ll i=k,j=0,mn=0;
//         while(i<n&&j<n)
//         {
//             if(a[i][j]<0)
//             mn=min(mn,a[i][j]);
//             i++,j++;
//         }
//         sum+=abs(mn);
//        }
//        cout<<sum<<endl;
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
    while (t--) 
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }

        set<ll> s;
        ll pre_sum = 0;
        ll ans = 0;

        s.insert(0);

        for (int i = 0; i < n; i++) 
        {
            pre_sum += a[i];

            if (s.count(pre_sum)) 
            {
                ans++;
                s.clear();
                s.insert(0);
                pre_sum = 0;
            }
            else 
            {
                s.insert(pre_sum);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
