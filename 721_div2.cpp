
// // B1. Palindrome Game (easy version)

// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// bool isPalindrome(const string &s)
// {
//     int l = 0, r = s.size() - 1;
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

//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         string s;
//         cin >> n >> s;

//         ll alice = 0, bob = 0;
//         bool turn = true;
//         bool rev = false;
//         ll zero = count(s.begin(), s.end(), '0');

//         while (zero > 0)
//         {
//             if (isPalindrome(s))
//             {

//                 bool change = false;
//                 for (int i = 0; i < n; i++)
//                 {
//                     if (s[i] == '0')
//                     {
//                         s[i] = '1';
//                         if (isPalindrome(s))
//                         {
//                             zero--;
//                             change = true;
//                             break;
//                         }
//                         else
//                             s[i] = '0';
//                     }
//                 }

//                 if (!change)
//                 {
//                     for (int i = 0; i < n; i++)
//                     {
//                         if (s[i] == '0')
//                         {
//                             s[i] = '1';
//                             zero--;
//                             change = true;
//                             break;
//                         }
//                     }
//                 }

//                 if (turn)
//                 {
//                     alice++;
//                 }
//                 else
//                 {
//                     bob++;
//                 }

//                 turn = !turn;
//                 rev = false;
//             }
//             else
//             {
//                 if (!rev)
//                 {
//                     reverse(s.begin(), s.end());
//                     rev = true;
//                     turn = !turn;
//                 }
//             }
//         }

//         if (alice < bob)
//         {
//             cout << "ALICE\n";
//         }
//         else if (bob < alice)
//         {
//             cout << "BOB\n";
//         }
//         else
//         {
//             cout << "DRAW\n";
//         }
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t;
//     cin >> t;

//     while (t--) {
//         ll n;
//         string s;
//         cin >> n >> s;

      
//         ll zero = count(s.begin(), s.end(), '0');

       
//         if (zero % 2 == 1 && zero != 1) {
//             cout << "ALICE\n";
//         } else {
//             cout << "BOB\n";
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        string s;
        cin >> n >> s;

        ll zero = 0;
        for (char c : s)
        {
            if (c == '0')
                zero++;
        }

        if (zero % 2 == 1 && zero > 1)
        {
            cout << "ALICE\n";
        }
        else
        {
            cout << "BOB\n";
        }
    }
    return 0;
}
