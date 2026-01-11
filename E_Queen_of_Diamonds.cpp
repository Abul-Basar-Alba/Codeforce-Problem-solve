// #include <bits/stdc++.h>
// #define all(v) (v).begin(), (v).end()
// #define srt(v) sort(all(v))
// #define rsrt(v) sort(all(v), greater<ll>())

// using namespace std;
// typedef long long ll;


// const int MOD = 1000000007;
// const int MAX_N = 1000000;

// vector<ll> power() 
// {
//     vector<ll> pow2(MAX_N + 1);
//     pow2[0] = 1;
//     for (int i = 1; i <= MAX_N; i++) 
//     {
//         pow2[i] = (pow2[i-1] * 2) % MOD;
//     }
//     return pow2;
// }

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);

//     vector<ll> pow2 = power();

//     ll r;
//     cin >> r;
//     while (r--) 
//     {
//         ll n;
//         string s;
//         cin >> n >> s;
//         bool seen[26] = {false};
//         for (char c : s) 
//         {
//             seen[c - 'a'] = true;
//         }
//         ll k = 0;
//         for (int i = 0; i < 26; i++) 
//         {
//             if (seen[i]) k++;
//         }
//         cout << pow2[n - k] << '\n';
//     }
    
//     return 0;
// }
#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

const ll MOD = 1000000007;


ll power(ll a, ll b, ll mod) 
{
    ll res = 1;
    while (b) 
    {
        if (b & 1) 
        res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

void Basar()
{
    ll n;
    string s;
    cin >> n >> s;

    bool seen[26] = {false};
    for (char c : s) 
    {
        seen[c - 'a'] = true;
    }

    ll k = 0;
    for (int i = 0; i < 26; i++) 
    {
        if (seen[i]) 
        {
            k++;
        }
    }

    cout << power(2, n - k, MOD) << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;
    while (t--)
    {
        Basar();
    }
    return 0;
}
