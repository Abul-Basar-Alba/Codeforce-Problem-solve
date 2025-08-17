// #include <bits/stdc++.h>
// #define ll ll int 
// using namespace std;

// //using namespace std;

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
//         vector<ll> a(n), b(n);
        
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cin >> b[i];
//         }
        
        
//         set<ll> setA(a.begin(), a.end());
//         set<ll> setB(b.begin(), b.end());
//         ll disA= setA.size();
//         ll disB = setB.size();
        
//         bool ok = false;
        
//         if(disB >= 3) 
//         {
//             ok = true;
//         }
//         else if(disB == 2) 
//         {
            
//             if(disA >= 2)
//                 ok = true;
//             else
//                 ok= false;
//         }
//         else { 
//             if(disA >= 3)
//                 ok = true;
//             else
//                 ok = false;
//         }
        
//         cout << (ok ? "YES" : "NO") << "\n";
//     }
    
//     return 0;
// }





// #include <bits/stdc++.h>
// using namespace std;
 

// const int INF = 1e9+7;
 
// int n, k;
// vector<int> a; 
// struct State {
//     int pos, seg, off;
// };
 
// struct StateHash {
//     size_t operator()(const State &s) const {
//         return ((size_t)s.pos * 13131U + s.seg) * 10007U + s.off;
//     }
// };
 
// bool operator==(const State &s1, const State &s2) {
//     return s1.pos==s2.pos && s1.seg==s2.seg && s1.off==s2.off;
// }
 
// unordered_map<State, int, StateHash> memo;
 

// int dp(int pos, int seg, int off) {
    
//     if(seg == k) return off + 1;
   
//     int rem = n - pos;
//     int needed = k - seg;
//     if(rem < needed) return INF;
 
//     State s = {pos, seg, off};
//     if(memo.find(s) != memo.end())
//         return memo[s];
 
//     int ans = INF;
    
//     bool evenSeg = ((seg+1) % 2 == 0);
//     if(!evenSeg) {
        
//         for (int L = 1; L <= rem - (needed - 1); L++){
//             int res = dp(pos + L, seg + 1, off);
//             ans = min(ans, res);
//             if(ans == 1) break; 
//         }
//     } else {
        
//         for (int L = 1; L <= rem - (needed - 1); L++){
          
//             int j;
//             for(j = 1; j <= L; j++){
//                 if(a[pos + j - 1] != off + j){
                    
//                     break;
//                 }
//             }
//             if(j <= L){
                
//                 ans = min(ans, off + j);
                
//                 break;
//             } else {
               
//                 if(seg + 1 < k) {
//                     if(pos + L < n) {
//                         int bestNext = INF;
//                         int rem2 = n - (pos + L);
//                         int needed2 = k - (seg + 1);
                        
//                         for (int Lodd = 1; Lodd <= rem2 - (needed2 - 1); Lodd++){
//                             int res = dp(pos + L + Lodd, seg + 2, off + L);
//                             bestNext = min(bestNext, res);
//                             if(bestNext == off+1) break;
//                         }
//                         ans = min(ans, bestNext);
//                     }
//                 } else {
                    
//                     ans = min(ans, off + L + 1);
//                 }
//             }
//         }
//     }
//     memo[s] = ans;
//     return ans;
// }
 

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
 
//     int t; 
//     cin >> t;
//     while(t--){
//         cin >> n >> k;
//         a.resize(n);
//         for (int i=0; i<n; i++){
//             cin >> a[i];
//         }
//         memo.clear();
 
//         int res = dp(0, 0, 0);
//         cout << res << "\n";
//     }
//     return 0;
// }


#include <bits/stdc++.h>
#define ll ll int 
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>a(n),b(n);
        set<ll>s1;
        set<ll>s2;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s1.insert(a[i]);
        }
         for(int i=0;i<n;i++)
        {
            cin>>b[i];
            s2.insert(b[i]);
        }
        if(s1.size()>=3||s2.size()>=3)
        {
            cout<<"YES\n";
        }
        else if(s1.size()==2&&s2.size()==2)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    
    return 0;
}