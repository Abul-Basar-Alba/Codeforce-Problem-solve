
//A: Kevin and Combination Lock

// #include <bits/stdc++.h>
// #define ll ll
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

//         if (n < 33 && n != 0)
//         {
//             cout << "NO\n";
//             continue;
//         }

//         while (true) 
//         {
//             string s = to_string(n);
//             bool remove = false;

//             for (int i = 0; i < s.size() - 1; i++) 
//             {
//                 if (s[i] == '3' && s[i + 1] == '3') 
//                 {
//                     s.erase(i, 2); 
//                     remove = true;
//                     break;
//                 }
//             }

//             if (remove) 
//             {
                
//                 n = s.empty() ? 0 : stoll(s);
//             } 
//             else if (n >= 33) 
//             {
//                 n -= 33;
//             } 
//             else 
//             {
//                 break;
//             }

//             if (n == 0) 
//             {
//                 cout << "YES\n";
//                 break;
//             }
//         }

//         if (n != 0) 
//         {
//             cout << "NO\n";
//         }
//     }

//     return 0;
// }


//B. Kevin and Permutation

#include <bits/stdc++.h>
#define ll ll
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--) 
    {
        ll n, k;
        cin >> n >> k;
        
        if (k == 1) 
        {
            
            for (int i = 1; i <= n; i++) 
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else 
        {
            deque<ll> dq;
            for (int i = 1; i <= n; i++) 
            {
               
                dq.push_back(i);
                
                ll tem = k - 1;
                while (tem != 0 && n > 0) 
                {
                    if (n > i)
                        dq.push_back(n);
                    n--;
                    tem--;
                }
                if (i == 1) 
                {
                    tem = k - 1;
                    while (tem != 0 && n > 0) 
                    {
                        if (n > i)
                            dq.push_front(n);
                        n--;
                        tem--;
                    }
                }
                if (n <= 0) 
                    break;
            }
            for (auto it : dq) 
            {
                cout << it << " ";
            }
            cout << endl;
        }
    }
}




