/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cn=0;
        map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
            char x=s[i];
            while(s[i]==x)
            {
                i++;
            }
            i--;
            if(mp[s[i]]>1)cn=1;
        }
        if(cn==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a;
        cin >> a;


        if (360 % (180 - a) == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}*/

// #include <iostream>
// #include <vector>

// using namespace std;

// int countAlmostPrimes(int n) {
//     vector<int> sieve(n + 1, 0);
//     vector<int> almostPrime(n + 1, 0);

//     for (int i = 2; i <= n; ++i) {
//         if (sieve[i] == 0) {
//             for (int j = i; j <= n; j += i) {
//                 sieve[j]++;
//             }
//         }
//         if (sieve[i] == 2) {
//             almostPrime[i] = 1;
//         }
//     }

//     int count = 0;
//     for (int i = 1; i <= n; ++i) {
//         count += almostPrime[i];
//     }

//     return count;
// }

// int main() {
//     int n;
//     cin >> n;

//     int result = countAlmostPrimes(n);
//     cout << result << endl;

//     return 0;
// }

//D. Same Differences

#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--)
    {
      ll n;
      cin>>n;
      vector<ll>v(n);
      for(int i=0;i<n;i++)
      {
        cin>>v[i];
      }
      map<ll,ll>mp;
      for(int i=0;i<n;i++)
      {
        ll x=v[i]-(i+1);
        mp[x]++;
      }
      ll res=0;
      for(auto it:mp)
      {
        ll a=it.second;
         res+=(a*(a-1)/2);
      }
      cout<<res<<endl;
    }
}


