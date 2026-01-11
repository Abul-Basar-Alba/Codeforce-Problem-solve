// #include <iostream>
// using namespace std;

// const int primes[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

// int main() 
// {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         long long l;
//         cin >> n >> l;
//         if (n > 15) {
//             cout << -1 << endl;
//             continue;
//         }
//         unsigned long long P = 1;
//         for (int i = 0; i < n; i++) {
//             P *= primes[i];
//             if (P > (unsigned long long) l) {
//                 break;
//             }
//         }
//         if (P > (unsigned long long) l) {
//             cout << -1 << endl;
//         } else {
//             for (int i = 0; i < n; i++) {
//                 cout << P / primes[i];
//                 if (i < n - 1) cout << " ";
//             }
//             cout << endl;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int prime[15] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};

void Basar()
{
    int n;
    ll l;
    cin >> n >> l;

    if (n > 15) 
    {
        cout << -1 << '\n';
        return;
    }
    
    ll p = 1;
    for (int i = 0; i < n; i++) 
    {
        p *= prime[i];
        if (p > l) 
        break;
    }

    if (p > l) 
    {
        cout << -1 << '\n';
    } 
    else 
    {
        for (int i = 0; i < n; i++) 
        {
            cout << p / prime[i];
            if (i < n-1) 
            {
                cout << " ";
            }
        }
        cout << '\n';
    }
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
