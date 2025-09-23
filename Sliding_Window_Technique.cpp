
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string t;
    cin>>t;
    int ans=0;
    string s1;
    for(int i=0;i<t.size();i++)
    {
        s1+=s[i];
    }
    if(s1==t)
        ans++;
    for(int i=t.size();i<s.size();i++)
    {
        s1+=s[i];
        s1.erase(s1.begin());
        if(s1==t)ans++;
    }
    cout<<ans<<endl;
}

//Best efficient KMP technic using praterb maching 

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// vector<ll> prefix_function(const string &s) 
// {
//     ll n = s.size();
//     vector<ll> pi(n);
//     for (ll i = 1, j = 0; i < n; i++) 
//     {
//         while (j > 0 && s[i] != s[j]) 
//         j = pi[j-1];
//         if (s[i] == s[j]) 
//         {
//             j++;
//         }
//         pi[i] = j;
//     }
//     return pi;
// }

// int main() 
// {
//     string text, pattern;
//     cin >> text >> pattern;
//     string S = pattern + '#' + text;
//     vector<ll> pi = prefix_function(S);

//     ll ans = 0;
//     for (ll l : pi) 
//     {
//         if (l == pattern.size()) 
//         ans++;
//     }
//     cout << ans << "\n";
// }


//leetcode:1876. Substrings of Size Three with Distinct Characters

//class Solution {
//public:
//    int countGoodSubstrings(string s) {
//        if(s.size()<3)return 0;
//        map<char,int>mp;
//        int ans=0;
//        mp[s[0]]++;
//        mp[s[1]]++;
//        mp[s[2]]++;
//        if(mp.size()==3)ans++;
//        for(int i=3,j=0;i<s.size();i++,j++)
//        {
//            mp[s[i]]++;
//            mp[s[j]]--;
//            if(mp[s[j]]==0)mp.erase(s[j]);
//            if(mp.size()==3)ans++;
//        }
//        return ans;
//    }
//};


//leetcode: https://leetcode.com/problems/maximum-average-subarray-i/

//class Solution {
//public:
//    double findMaxAverage(vector<int>& nums, int k) {
//        double ans;
//        double sum=0;
//        for(int i=0;i<k;i++)
//        {
//            sum+=nums[i];
//        }
//        ans=sum/k;
//        for(int i=k;i<nums.size();i++)
//        {
//            sum+=nums[i];
//            sum-=nums[i-k];
//            double num=sum/k;
//            if(num>ans)
//            ans=num;
//            //ans=max(ans,sum/k);
//        }
//        return ans;
//    }
//};


//codeforces: https://codeforces.com/contest/1995/problem/B1


//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    ll t;
//    cin >> t;
//    while (t--)
//    {
//        ll n, m;
//        cin >> n >> m;
//        vector<ll> a(n);
//        for (int i = 0; i < n;i++)
//        {
//            cin >> a[i];
//        }
//        ll mx= 0;
//        if (m == 1)
//        {
//            for (int i = 0; i < n; ++i)
//            {
//                if (a[i] <= m)
//                {
//                    mx = max(mx, a[i]);
//                }
//            }
//        }
//        else
//        {
//        sort(a.begin(), a.end());
//
//        ll cur = 0;
//        int l= 0;
//
//        for (int r = 0; r < n; r++)
//        {
//            cur+= a[r];
//            while (a[r] - a[l] > 1 || cur> m) //Sliding Window Technique
//            {
//                cur -= a[l];
//                l++;
//            }
//
//            if (cur<= m && (a[r] - a[l] <= 1))
//            {
//                mx = max(mx, cur);
//            }
//        }
//
//        }
//
//        cout << mx << "\n";
//    }
//    return 0;
//}
