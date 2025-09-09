// #include <bits/stdc++.h>
// #define all(v) (v).begin(), (v).end()
// #define srt(v) sort(all(v))
// #define rsrt(v) sort(all(v), greater<ll>())

// using namespace std;
// typedef long long ll;

// void Basar()
// {
//     ll n;
//     cin >> n;
//     string s;
//     cin >> s;

//     string t = s;
//     sort(t.begin(), t.end()); 

//     if (s == t) 
//     {
//         cout << 0 << "\n";
//         return;
//     }

//     bool one = false;
//     for (int i = 0; i < n && !one; i++) 
//     {
//         for (int j = i+1; j < n && !one; j++) 
//         {
//             for (int k = j+1; k < n && !one; k++) 
//             {
//                 string tmp = s;
//                 char a = tmp[i], b = tmp[j], c = tmp[k];
//                 tmp[i] = c; tmp[j] = a; tmp[k] = b;
//                 if (tmp == t) 
//                 { 
//                     one = true; 
//                     break; 
//                 }
//                 tmp = s;
//                 tmp[i] = b; tmp[j] = c; tmp[k] = a;
//                 if (tmp == t) 
//                 { 
//                     one = true; 
//                     break; 
//                 }
//             }
//         }
//     }

//     if (one) 
//     cout << 1 << "\n";
//     else 
//     cout << 2 << "\n";
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t = 1;
//     cin >> t;
//     while (t--)
//     {
//         Basar();
//     }
//     return 0;
// }


#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void Basar()
{
    ll n;
    string s;
    cin >> n >> s;
    ll cnt0 = 0;
    for (char c : s) 
    {
        if (c == '0') 
        {
            cnt0++;
        }
    }
    ll one = 0;
    for (int i = 0; i < cnt0; i++) 
    {
        if (s[i] == '1') 
        {
            one++;
        }
    }
    cout << one << endl;

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