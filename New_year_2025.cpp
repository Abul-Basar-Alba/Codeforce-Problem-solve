
//G - Ancient Keyboard (AtCoder - abc373_b )

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     string s;
//     cin >> s; 
    
//     vector<ll> pos(26); 
//     for (int i = 0; i < 26; ++i) 
//     {
//         pos[s[i] - 'A'] = i + 1; 
//     }
    
//     ll total = 0; 
//     ll cur= pos[0]; 
    
//     for (int i = 1; i < 26;i++) 
//     {
//         total += abs(pos[i] - cur);
//         cur = pos[i]; 
//     }
    
//     cout << total << '\n'; 
//     return 0;
// }

//C - Lost Memory Matters 

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     vector<ll> v; 
//     ll n;

//     while (cin >> n) 
//     {
//         v.push_back(n);
//         if (n == 0) 
//         break;
//     }

//     reverse(v.begin(), v.end());
//     for (int x : v) 
//     {
//         cout << x << "\n";
//     }

//     return 0;
// }


//D - Friendship Testing 

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll n, k;
//     cin >> n >> k;

//     vector<ll> a(n);
//     for (ll i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     ll x = k * (k + 1) / 2;

//     set<ll> s;
//     ll sum = 0;
//     for (ll i = 0; i < n; i++) 
//     {
//         if (a[i] <= k && s.find(a[i]) == s.end()) 
//         {
//             sum += a[i];
//             s.insert(a[i]); 
//         }
//     }

//     cout << (x - sum) << "\n";

//     return 0;
// }

//H - Chaos!! 

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;


// ll merge_and_count(vector<ll>& arr, ll left, ll right) 
// {
//     if (left >= right) 
//     return 0;

//     ll mid = left + (right - left) / 2;
//     ll inv_count = 0;

//     inv_count += merge_and_count(arr, left, mid);
//     inv_count += merge_and_count(arr, mid + 1, right);


//     vector<ll> temp(right - left + 1);
//     int i = left, j = mid + 1, k = 0;

//     while (i <= mid && j <= right) 
//     {
//         if (arr[i] <= arr[j]) 
//         {
//             temp[k++] = arr[i++];
//         } 
//         else 
//         {
//             temp[k++] = arr[j++];
//             inv_count += (mid - i + 1); 
//         }
//     }

//     while (i <= mid) 
//     temp[k++] = arr[i++];
//     while (j <= right) 
//     temp[k++] = arr[j++];


//     for (int i = left; i <= right; i++) 
//     arr[i] = temp[i - left];

//     return inv_count;
// }

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll n;
//     cin >> n;
//     vector<ll> arr(n);

//     for (int i = 0; i < n; i++) 
//     {
//         cin >> arr[i];
//     }

//     ll result = merge_and_count(arr, 0, n - 1);
//     cout << result << endl;

//     return 0;
// }


//H - Chaos!! 

#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> arr(n);
    
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    ll count = 0;
    
    vector<ll> temp(n);
   
    for (ll i = 1; i < n; i *= 2) 
    {
        for (ll j = 0; j < n; j += 2 * i) 
        {
            ll mid = min(j + i, n);
            ll r = min(j + 2 * i, n);
            ll l = j, m = mid, k = j;
            
            while (l < mid && m < r) 
            {
                if (arr[l] <= arr[m]) {
                    temp[k++] = arr[l++];
                } else {
                    temp[k++] = arr[m++];
                    count += (mid - l);  
                }
            }
            
       
            while (l < mid) 
            temp[k++] = arr[l++];
            while (m < r) 
            temp[k++] = arr[m++];
            
            for (int k = j; k < r; k++)
            {
                arr[k] = temp[k];
            }
        }
    }

    cout << count << endl;

    return 0;
}
