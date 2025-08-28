
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
//         string s;
//         cin>>s;
//      ll n=stoll(s);
//      ll cnt=0;
//      for(int i=0;i<s.size();i++)
//      {
//         if(s[i]=='0'||s[i]=='1')
//         cnt++;
//      }
//      if(cnt==s.size())
//      {
//         cout<<"YES\n";
//         continue;
//      }
  
//         vector<ll>a={1,10,11,100,101,110,111,121,1000,1001,1010,1100,1110,1111,1210,1221,1331,10000,10010,10100,10201,11121,11000,11011,11100
//             ,11110,11211,12100,12111,12210,12221,12321,13310,13431,14641,100000};
//         bool ok=false;
//         for(int i=0;i<a.size();i++)
//         {
//             if(a[i]==n)
//             {
//                 ok=true;
//                 break;
//             }
//         }
//         if(ok)
//         {
//             cout<<"YES\n";
//         }
//         else
//         cout<<"NO\n";
//     }
// }

#include <bits/stdc++.h>
#define ll ll int
using namespace std;

const ll MAX = 1e5;
vector<ll> binary = {10, 11, 101, 110, 111, 1001, 1010,1011, 1100,1101,1110,1111}; 
set<ll> res;

void dfs(ll cur, ll index) 
{
    if (cur > MAX) 
    return;
    if (cur != 1) 
    res.insert(cur);

    for (int i = index; i < binary.size(); i++) 
    {
        ll next = cur * binary[i];
        if (next <= MAX)
            dfs(next, i); 
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    dfs(1, 0);

    ll t;
    cin >> t;

    while (t--) 
    {
        string s;
        cin >> s;
        ll n = stoll(s);

       ll cnt=0;
     for(int i=0;i<s.size();i++)
     {
        if(s[i]=='0'||s[i]=='1')
        cnt++;
     }
     if(cnt==s.size())
     {
        cout<<"YES\n";
        continue;
     }

        if (res.count(n)) 
        {
            cout << "YES\n";
        } 
        else 
        {
            cout << "NO\n";
        }
    }
}
