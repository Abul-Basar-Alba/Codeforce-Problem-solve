
//A - Skibidus and Amog'u

// #include <bits/stdc++.h>
// using namespace std;
// #define ll ll int

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t;
//     cin >> t;
//     while (t--) {
//         string W;
//         cin >> W;
        
        
//         W.replace(W.length() - 2, 2, "i");
        
//         cout << W << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define ll ll int

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t;
//     cin >> t;
//     while (t--) 
//     {
//         string s;
//         cin >> s;
//         ll n = s.size();

//         if (n >= 2 && s[n - 1] == 's' && s[n - 2] == 'u') 
//         {
//             s.erase(n - 2, 2); 
//         }

//         s.push_back('i'); 

//         cout << s << endl;
//     }
// }


//C1 - Skibidus and Fanum Tax (easy version)

// #include <bits/stdc++.h>
// using namespace std;
// #define ll ll int

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t;
//     cin >> t;
//     while(t--)
//     {
//         ll n, m;
//         cin >> n >> m; 
//         vector<ll> a(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
        
      
//         ll B;
//         cin >> B;
 
        
//         ll cur = -1000000000000000000LL; 
//         bool pos = true;
 
       
//         for (int i = 0; i < n; i++)
//         {
//             ll orig = a[i];
//             ll trans = B - a[i];
           
//             ll L = min(orig, trans);
//             ll R = max(orig, trans);
 
            
//             if(L >= cur)
//             {
//                 cur = L;
//             }
//             else if(R >= cur)
//             {
//                 cur = R;
//             }
//             else
//             {
//                 pos = false;
//                 break;
//             }
//         }
 
//         cout << (pos ? "YES" : "NO") << "\n";
//     }
//     return 0;
// }

//B - Skibidus and Ohio

// #include <bits/stdc++.h>
// using namespace std;
// #define ll ll int

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t;
//     cin >> t;
//     while(t--)
//     {
//         string s;
//         cin >> s;
        
//         bool has = false;
        
//         for (int i = 0; i < s.size() - 1; i++) 
//         {
//             if (s[i] == s[i + 1]) {
//                 has = true;
//                 break;
//             }
//         }
        
//         cout << (has ? 1 : (int)s.size()) << "\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll ll int

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        bool ok=true;
        ll cn=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(ok==true&& s[i]==s[i+1])
            {
             ok=false;
            break;
            }
            
        }
        if(ok)
        cout<<s.size()<<endl;
        else
        cout<<1<<endl;
    }
}


//D - Skibidus and Sigma


// #include <bits/stdc++.h>
// using namespace std;

// typedef ll ll;

// int main() 
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     ll t;
//     cin >> t;
//     while (t--) 
//     {
//         int n, m;
//         cin >> n >> m;
//         vector<pair<ll, ll>> arr(n); 

//         for (int i = 0; i < n; ++i) {
//             ll S = 0, T = 0;
//             for (int j = 1; j <= m; ++j) 
//             { 
//                 ll a;
//                 cin >> a;
//                 S += a;
//                 T += a * (n * m + 1 - j); 
//             }
//             arr[i] = {S, T};
//         }

       
//         sort(arr.begin(), arr.end(), [](const pair<ll, ll>& a, const pair<ll, ll>& b) {
//             return a.first > b.first;
//         });

//         ll sum_T = 0, sum_p_S = 0;
//         for (int i = 0; i < n; ++i) {
//             sum_T += arr[i].second;
//             sum_p_S += i * arr[i].first; 
//         }

//         ll ans = sum_T - m * sum_p_S;
//         cout << ans << '\n';
//     }

//     return 0;
// }

//C2 - Skibidus and Fanum Tax (hard version)

// #include <bits/stdc++.h>
// using namespace std;

// typedef ll ll;

// int main() 
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);

//     ll t;
//     cin >> t;
//     while (t--) 
//     {
//         ll n, m;
//         cin >> n >> m;
//         vector<ll> a(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
        
//         vector<ll> b(m);
//         for (int j = 0; j < m; j++)
//         {
//             cin >> b[j];
//         }
 
//         sort(b.begin(), b.end());
 
//         ll cur = -1000000000000000000LL;  
//         bool ok= true;
 
//         for (int i = 0; i < n; i++)
//         {
            
//             ll can = (a[i] >= cur ? a[i] : LLONG_MAX);
 
//             ll can1 = LLONG_MAX;
//             ll need = cur + a[i];
            
//             int idx = int(lower_bound(b.begin(), b.end(), need) - b.begin());
//             if(idx < m){
//                 can1 = b[idx] - a[i];
//             }
 
            
//             ll chosen = min(can, can1);
//             if(chosen == LLONG_MAX){ 
//                 ok = false;
//                 break;
//             }
//             cur = chosen; 
//         }
 
//         cout << (ok ? "YES" : "NO") << "\n";
//     }
//     return 0;
// }

//G - Skibidus and Capping

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;
 
// const int MAX_N = 200000;
 
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
 
//     vector<bool> isPrime(MAX_N+1, true);
//     isPrime[0] = isPrime[1] = false;
//     for (int i = 2; i * i <= MAX_N; i++)
//     {
//         if(isPrime[i])
//         {
//             for (int j = i * i; j <= MAX_N; j += i)
//                 isPrime[j] = false;
//         }
//     }
//     vector<int> primes;
//     for (int i = 2; i <= MAX_N; i++)
//     {
//         if(isPrime[i])
//             primes.push_back(i);
//     }
 
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
    
//         vector<int> freq(n+1, 0);
//         for (int i = 0; i < n; i++)
//         {
//             int x;
//             cin >> x;
            
//             freq[x]++;
//         }
 
//         ll ans = 0;
 
//         for (int p : primes)
//          {
//             if(p > n) break;
//             ll pSq = (ll)p * p;
//             if(pSq > n) break;
//             ll cntP = freq[p];       
//             ll cntPSq = freq[pSq];     
//             ans += cntP * cntPSq + (cntPSq * (cntPSq + 1LL)) / 2;
//         }
 
//         int primeCount = primes.size();
//         for (int i = 0; i < primeCount; i++)
//         {
//             int p = primes[i];
//             if(p > n) break;
//             ll cntP = freq[p]; 
//             for (int j = i + 1; j < primeCount; j++){
//                 int q = primes[j];
//                 if(q > n) break;
//                 ll cntQ = freq[q]; 
//                 ll prod = (ll)p * q;
//                 if(prod <= n){
//                     ll cntProd = freq[prod]; 
//                     ans += cntP * cntQ + cntP * cntProd + cntQ * cntProd + (cntProd * (cntProd + 1LL)) / 2;
//                 } else {
                   
//                     ans += cntP * cntQ;
//                 }
//             }
//         }
 
//         cout << ans << "\n";
//     }
//     return 0;
// }

//F - Skibidus and Slay

// #include <bits/stdc++.h>
// using namespace std;
 
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;
        
//         vector<int> a(n+1);
//         vector<int> freq(n+1, 0);
//         for (int i = 1; i <= n; i++){
//             cin >> a[i];
//             freq[a[i]]++;
//         }
        

//         vector<vector<int>> adj(n+1);
//         for (int i = 1; i < n; i++){
//             int u, v;
//             cin >> u >> v;
//             adj[u].push_back(v);
//             adj[v].push_back(u);
//         }
 
//         vector<bool> good(n+1, false);
 
//         for (int u = 1; u <= n; u++){
//             for(auto v : adj[u]){
                
//                 if(u < v){
//                     if(a[u] == a[v]){
//                         good[a[u]] = true;
//                     }
//                 }
//             }
//         }
 
       
//         for (int v = 1; v <= n; v++){
//             if(adj[v].size() < 2)
//                 continue; 
//             vector<int> neg;
//             neg.reserve(adj[v].size());
//             for(auto u : adj[v]){
//                 neg.push_back(a[u]);
//             }
//             sort(neg.begin(), neg.end());
//             int cnt = 1;
//             for (size_t i = 1; i < neg.size(); i++){
//                 if(neg[i] == neg[i-1]){
//                     cnt++;
//                 } else {
//                     if(cnt >= 2)
//                         good[neg[i-1]] = true;
//                     cnt = 1;
//                 }
//             }
//             if(cnt >= 2)
//                 good[neg.back()] = true;
//         }
 
//         string ans;
//         ans.resize(n, '0');
//         for (int x = 1; x <= n; x++){
//             if(freq[x] >= 2 && good[x])
//                 ans[x-1] = '1';
//             else
//                 ans[x-1] = '0';
//         }
 
//         cout << ans << "\n";
//     }
//     return 0;
// }

//E - Skibidus and Rizz

// #include <bits/stdc++.h>
// using namespace std;

// string construct(int n, int m, int k) {
//     string s;
//     char current = (n >= m) ? '0' : '1';
//     int remaining[2] = {n, m};
//     while (remaining[0] > 0 || remaining[1] > 0) {
//         int idx = (current == '0') ? 0 : 1;
//         int take = min(remaining[idx], k);
//         s += string(take, current);
//         remaining[idx] -= take;
//         current = (current == '0') ? '1' : '0';
//     }
//     return s;
// }

// bool check(const string &s, int k) {
//     int max_run = 0;
//     int current_run = 1;
//     for (int i = 1; i < s.size(); ++i) {
//         if (s[i] == s[i-1]) {
//             current_run++;
//         } else {
//             max_run = max(max_run, current_run);
//             current_run = 1;
//         }
//     }
//     max_run = max(max_run, current_run);
//     int zeros = count(s.begin(), s.end(), '0');
//     int ones = s.size() - zeros;
//     int diff = abs(zeros - ones);
//     return max(max_run, diff) == k;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m, k;
//         cin >> n >> m >> k;
//         if (n == 0 || m == 0) {
//             if (k == max(n, m)) {
//                 cout << string(max(n, m), (n > 0) ? '0' : '1') << '\n';
//             } else {
//                 cout << "-1\n";
//             }
//             continue;
//         }
//         if (k < abs(n - m) || k > max(n, m)) {
//             cout << "-1\n";
//             continue;
//         }
//         string s = construct(n, m, k);
//         if (check(s, k)) {
//             cout << s << '\n';
//         } else {
//             cout << "-1\n";
//         }
//     }
//     return 0;
// }