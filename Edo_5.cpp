//A - Leyland Number 

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll a,b;
//     cin>>a>>b;
//     ll x = pow(a, b); 
//     ll y = pow(b, a); 
  
//     cout << x + y << endl;
    
//     return 0;
// }


//B - 321-like Checker 


// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     ll n;
//     cin >> n; 

//     string s = to_string(n); 
//     bool ok = true;

//     for (int i = 0; i < s.size() - 1; i++)
//     {
//         if (s[i] <= s[i + 1])
//         {
//             ok = false; 
//             break;
//         }
//     }

//     if (ok) 
//     {
//         cout << "Yes" << endl;
//     } 
//     else 
//     {
//         cout << "No" << endl;
//     }

//     return 0;
// }


//C - Longest Palindrome 


// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// bool isPalindrome(string s, int l, int r) 
// {
//     while (l < r) 
//     {
//         if (s[l] != s[r])
//             return false;
//         l++;
//         r--;
//     }
//     return true;
// }

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s;
//     cin >> s; 

//     ll mx = 1; 
//     ll n = s.size();

//     for (int i = 0; i < n; i++) 
//     {
//         for (int j = i; j < n; j++) 
//         {
//             if (isPalindrome(s, i, j)) 
//             {
//                 mx = max(mx, (ll)(j - i + 1));
//             }
//         }
//     }

//     cout << mx << endl; 
//     return 0;
// }


//D - Cutoff 

// #include <bits/stdc++.h>
// using namespace std;
// typedef ll int ll;

// void solve() 
// {
//     ll n, x;
//     cin >> n >> x;
    
//     multiset<ll> st;
//     ll sum = 0;

//     for (ll i = 0; i < n - 1; i++) 
//     {
//         ll t;
//         cin >> t;
//         st.insert(t);
//         sum += t;
//     }

//     for (ll i = 0; i <= 100; i++)
//     {
//         ll temp = sum;

//         st.insert(i);

//         sum -= *st.begin(); 
//         sum -= *st.rbegin(); 
//         sum += i;

//         if (sum >= x) 
//         {
//             cout << i << '\n';
//             return;
//         }
//         st.erase(st.find(i));
//         sum = temp;
//     }

//     cout << -1 << '\n';
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     solve(); 
    
//     return 0;
// }


//E - 321-like Searcher 

#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll k;
    cin >> k;
    queue<ll> q;
    for (int i = 1; i <= 9; i++) 
    {
        q.push(i);
    }
    vector<ll> a;
    while (!q.empty()) 
    {
        ll num = q.front();
        q.pop();
        a.push_back(num);
        if (a.size() == k)
            break;
        int last = num % 10;
        for (int i = 0; i < last; i++) 
        {
            q.push(num * 10 + i);
        }
    }
    cout << a[k - 1] << '\n';
}

