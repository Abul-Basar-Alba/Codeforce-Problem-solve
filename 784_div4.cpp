// #include <bits/stdc++.h>
// using namespace std;
// #define ll ll

// int main() 
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
    
//     ll t;
//     cin >> t;
//     while (t--) 
//     {
//         ll n;
//         cin >> n;
//         vector<string> arr(n);
//         map<string, int> freq;

//         for (int i = 0; i < n; i++) 
//         {
//             cin >> arr[i];
//         }

//         ll ans = 0;
//         for (int i = 0; i < n; i++) 
//         {
//             string s = arr[i];
            
//             for (char c = 'a'; c <= 'k'; c++) 
//             {
//                 if (c != s[1]) 
//                 {
//                     string temp = s;
//                     temp[1] = c;
//                     ans += freq[temp];
//                 }
//             }
            
//             for (char c = 'a'; c <= 'k'; c++) 
//             {
//                 if (c != s[0]) 
//                 {
//                     string temp = s;
//                     temp[0] = c;
//                     ans += freq[temp];
//                 }
//             }
//             freq[s]++;
//         }

//         cout << ans << "\n";
//     }
//     return 0;
// }


#include<bits/stdc++.h>
#define ll ll int 
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<string> s(n);
        map<string, int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
            mp[s[i]]++;
        }
        ll ans = 0;
        for (auto it1 = mp.begin(); it1 != mp.end(); ++it1) {
    auto it2 = it1;
    ++it2;
    for (; it2 != mp.end(); ++it2) {
        string s1 = it1->first;
        string s2 = it2->first;
        if ((s1[0] == s2[0] && s1[1] != s2[1]) || (s1[0] != s2[0] && s1[1] == s2[1])) {
            ans += 1LL * it1->second * it2->second;
        }
    }
}

        cout<<ans<<"\n";
    }
}