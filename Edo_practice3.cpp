//B - Japanese Cursed Doll 

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     ll n, t, p;
//     cin >> n >> t >> p;
//     vector<ll> v(n);
    
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
    
//     sort(v.begin(), v.end());

//     ll rem= p; 
//     for (int i = n - 1; i >= 0; i--)
//     {
//         if (v[i] >= t)
//         {
//             rem--;
//         }
//         else
//         {
//             break;  
//         }
//     }
    
//     if (rem <= 0)
//     {
//         cout << 0 << endl;
//         return 0;
//     }

//     ll res = 0;
//     for (int i = n - 1; i >= 0; i--)
//     {
//         p--;
//         if (p == 0)  
//         {
//             res = max(0LL, t - v[i]);
//             break;
//         }
//     }

//     cout << res << endl;
//     return 0;
// }

//A - Grid Walk 

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll h, w, s1, s2;
//     cin >> h >> w >> s1 >> s2;

//     s1--; 
//     s2--;

//     vector<string> g(h);
//     for (int i = 0; i < h; i++) 
//     {
//         cin>>g[i];
//     }

//     string s;
//     cin >> s;

//     ll curx= s1, cury = s2;

//     for (char move : s) 
//     {
//         ll newx = curx, newy = cury;

//         if (move == 'U') 
//         newx--;        
//         else if (move == 'D') 
//         newx++;   
//         else if (move == 'L') 
//         newy--;  
//         else if (move == 'R') 
//         newy++;   

//         if (newx >= 0 && newx < h && newy >= 0 && newy < w && g[newx][newy] == '.') 
//         {
//             curx = newx;
//             cury = newy;
//         }
//     }

//     cout << curx + 1 << " " << cury + 1 << endl;

//     return 0;
// }


//C - Minimum Glutton 

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll n,x,y;
//     cin>>n>>x>>y;
//     vector<ll> dis1(n);
//     vector<ll> dis2(n);
//     for (int i = 0; i < n;i++)
//      {
//         cin >> dis1[i]; 
//     }
//     for (int i = 0; i < n; i++) 
//     {
//         cin >> dis2[i]; 
//     }
    
//     sort(dis1.rbegin(), dis1.rend());
//     sort(dis2.rbegin(), dis2.rend());
//     ll totalsw = 0;
//     ll totalsl = 0;
//     ll res1= 0,res2=0;

//     for (const auto& dish : dis1) 
//     {
//         totalsw += dish;
//         res1++;

//         if (totalsw >x) 
//         {
//             break;
//         }
//     }

//     for (const auto& dish : dis2) 
//     {
//         totalsl += dish;
//         res2++;

//         if (totalsl >y) 
//         {
//             break;
//         }
//     }
//    ll ans=min(res1,res2);
//     cout << ans<< endl;
//     return 0;
// }

//D - Avoid K Palindrome 2 

#include <bits/stdc++.h>
#define ll ll int
using namespace std;

bool isPalindrome(const string& s, ll start, ll len) 
{
    ll end = start + len - 1;
    while (start < end) 
    {
        if (s[start] != s[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    string s;

    cin >> n >> k >> s;

    sort(s.begin(), s.end());
    
    ll res = 0;

    do 
    {
        bool ok = true;

        for (int i = 0; i <= n - k; i++) 
        {
            if (isPalindrome(s, i, k)) 
            {
                ok = false;
                break;  
            }
        }

        if (ok) 
        {
            res++;
        }
        
    } while (next_permutation(s.begin(), s.end()));

    cout << res << endl;

    return 0;
}
