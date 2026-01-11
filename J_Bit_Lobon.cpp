// #include <iostream>
// using namespace std;

// long long xor_up_to(long long n) {
//     if (n % 4 == 0) return n;
//     else if (n % 4 == 1) return 1;
//     else if (n % 4 == 2) return n + 1;
//     else return 0;
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         long long L, R;
//         cin >> L >> R;
        
//         long long A = 0;
//         for (int i = 60; i >= 0; i--) {
//             long long bit = (1LL << i);
//             if ((L & bit) == (R & bit)) {
//                 A |= (L & bit);
//             } else {
//                 break;
//             }
//         }
        
//         long long L_temp = L, R_temp = R;
//         int k = 0;
//         while (L_temp != R_temp) {
//             L_temp >>= 1;
//             R_temp >>= 1;
//             k++;
//         }
//         long long O = (L_temp << k) | ((1LL << k) - 1);
        
//         long long X;
//         if (L == 0) {
//             X = xor_up_to(R);
//         } else {
//             X = xor_up_to(R) ^ xor_up_to(L - 1);
//         }
        
//         cout << A << " " << O << " " << X << endl;
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
    ll l, r;
    cin >> l >> r;

    ll a = 0;
    for (int i = 60; i >= 0; i--)
    {
        ll bit = (1LL << i);
        if ((l & bit) == (r & bit))
            a |= (l & bit);
        else
            break;
    }

   
    ll l_temp = l, r_temp = r;
    int k = 0;
    while (l_temp != r_temp)
    {
        l_temp >>= 1;
        r_temp >>= 1;
        k++;
    }
    ll O = (l_temp << k) | ((1LL << k) - 1);

   
    ll x;
    if (l == 0)
    {

        if (r % 4 == 0) 
        x = r;
        else if (r % 4 == 1) 
        x = 1;
        else if (r % 4 == 2) 
        x = r + 1;
        else 
        x = 0;
    }
    else
    {
      
        ll xr, xl;
        if (r % 4 == 0) 
        xr = r;
        else if (r % 4 == 1)
         xr = 1;
        else if (r % 4 == 2) 
        xr = r + 1;
        else xr = 0;

        ll l1 = l - 1;
        if (l1 % 4 == 0) 
        xl = l1;
        else if (l1 % 4 == 1) 
        xl = 1;
        else if (l1 % 4 == 2) 
        xl = l1 + 1;
        else 
        xl = 0;

        x = xr ^ xl;
    }

    cout << a << " " << O << " " << x << "\n";
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
