// // B
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
//         ll n;
//         cin >> n;
//         vector<ll>v;
//         if(n==1)
//         cout<<1<<endl;
//         else if(n%2==0)
//         cout<<-1<<endl;
//         else
//         {
//           v.push_back(1);
//           for(int i=3,j=2;i<=n;i+=2,j+=2)
//           {
//           if (i <= n) v.push_back(i);
//           if (j <= n) v.push_back(j);
//           }
//           for(auto i:v)
//           cout<<i<<' ';
//           cout<<endl;
//         }
//     }

//     return 0;
// }

//A
#include <bits/stdc++.h>
#define ll ll int
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
        vector<ll> v(n);
        map<ll, ll> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        ll mx = 0;
        for (auto c : mp)
        {
            if (c.second > mx)
                mx = c.second;
        }

        cout << n - mx << endl;
    }

    return 0;
}



