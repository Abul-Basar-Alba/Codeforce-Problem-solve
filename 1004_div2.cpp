
//A - Adjacent Digit Sums

// #include <bits/stdc++.h>
// using namespace std;
// #define ll ll int

// int main() 
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while(t--) 
//     {
//         int x, y;
//         cin >> x >> y;
        
//         int diff = x + 1 - y;
 
//         if(diff == 0 || (diff >= 9 && diff % 9 == 0))
//             cout << "YES" << "\n";
//         else 
//             cout << "NO" << "\n";
//     }
    
//     return 0;
// }

//C - Devyatkino

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;
 
// const int L = 22; 

// const int MAX_CARRY = 110; 
// const int MAX_M = 25; 
 
 
// int memo[L+1][MAX_CARRY][MAX_M+1][2];
// bool vis[L+1][MAX_CARRY][MAX_M+1][2];
 

// int A_digits[L];

// int currM;

// bool dp(int pos, int carry, int r, int found)
// {
//     if(pos == L)
//     {
//         if(r != 0) return false; 
//         int temp = carry;
//         int ok = found;
//         while(temp > 0)
//         {
//             int d = temp % 10;
//             if(d == 7) ok = 1;
//             temp /= 10;
//         }
//         return (ok == 1);
//     }
//     if(vis[pos][carry][r][found])
//         return memo[pos][carry][r][found] == 1;
    
//     bool ans = false;
//     if(pos == 0)
//     {
//         int total = A_digits[0] + carry;
//         int d = total % 10;
//         int newCarry = total / 10;
//         int newFound = found || (d == 7);
//         ans = dp(pos+1, newCarry, r, newFound);
//     } 
//     else 
//     {
       
//         for(int x = 0; x <= r; x++)
//         {
//             int total = A_digits[pos] + x + carry;
//             int d = total % 10;
//             int newCarry = total / 10;
//             int newFound = found || (d == 7);
//             if(dp(pos+1, newCarry, r - x, newFound))
//             {
//                 ans = true;
//                 break;
//             }
//         }
//     }
//     vis[pos][carry][r][found] = true;
//     memo[pos][carry][r][found] = ans ? 1 : 0;
//     return ans;
// }

// void fillDigits(ll A_val) {
//     for (int i = 0; i < L; i++){
//         A_digits[i] = (int)(A_val % 10);
//         A_val /= 10;
//     }
// }
 
// bool containsSeven(ll x)
// {
//     if(x == 0) return false;
//     while(x > 0)
//     {
//         if(x % 10 == 7)
//             return true;
//         x /= 10;
//     }
//     return false;
// }
 
 
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
 
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         ll n;
//         cin >> n;

//         if(containsSeven(n))
//         {
//             cout << 0 << "\n";
//             continue;
//         }
 
//         ll res = -1;
  
//         for (int m = 1; m <= 50; m++)
//         {
            
//             if(n < m) break;
//             currM = m;
//             ll A_val = n - m;  
//             fillDigits(A_val);
//             memset(vis, 0, sizeof(vis));
 
//             bool possible = dp(0, 0, m, 0);
//             if(possible)
//             {
//                 res = m;
//                 break;
//             }
//         }
//         if(res == -1) res = 0; 
//         cout << res << "\n";
//     }
//     return 0;
// }

//C - Devyatkino

// #include <bits/stdc++.h>
// using namespace std;
// #define ll ll int

// bool has_seven(int n) 
// {
//     string s = to_string(n);
//     return s.find('7') != string::npos;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--) 
//     {
//         int n;
//         cin >> n;
//         if (has_seven(n)) 
//         {
//             cout << 0 << endl;
//             continue;
//         }
//         bool found = false;
//         for (int k = 1; k <= 20; ++k)
//          {
//             int m = n - k;
//             if (m < 0) continue;
//             string s = to_string(m);
         
//             if (s.size() < 20) 
//             {
//                 s = string(20 - s.size(), '0') + s;
//             }
//             for (char c : s) 
//             {
//                 int digit = c - '0';
//                 int req = (7 - digit) % 10;
//                 if (req< 0) req += 10;
//                 if (req <= k && (k - req) >= 0) 
//                 {
//                     cout << k << endl;
//                     found = true;
//                     break;
//                 }
//             }
//             if (found) break;
//         }
//         if (!found) 
//         {
            
//             cout << 20 << endl;
//         }
//     }
//     return 0;
// }

//B - Two Large Bags

#include <bits/stdc++.h>
using namespace std;

void solve(void) {
    int n;
    cin >> n;
    map<int, int> mp;
    vector<int> v(n);

    for (auto &it : v) {
        cin >> it;
        mp[it]++;
    }

    int fl = 1;
    for (auto it : mp) {
        if (it.second & 1) {
            fl = 0;
            break;
        }
    }

    if (fl) {
        cout << "Yes\n";
        return;
    }

    for (int i = 1; i <= 2 * n; i++) {
        if (mp[i] == 0) continue;

        if (mp[i] < 2) {
            cout << "No\n";
            return;
        }

        mp[i] -= 2;
        mp[i + 1] += mp[i];
    }

    cout << "Yes\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}