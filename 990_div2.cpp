
//B. Replace Character

// #include<bits/stdc++.h>
// #define ll ll int
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
//         string s;
//         cin >> n >> s;

//         string best = s;
//         ll mn = 1;


//         map<char, int> freq;
//         for (char c : s)
//         {
//             freq[c]++;
//         }
//         for (int i = 1; i <= n; ++i)
//         {
//             mn*= i;
//         }
//         for (auto &p : freq)
//         {
//             for (int i = 1; i <= p.second; ++i)
//             {
//                 mn /= i;
//             }
//         }


//         for (int i = 0; i < n; ++i)
//         {
//             for (int j = 0; j < n; ++j)
//             {
//                 string temp = s;
//                 temp[i] = s[j];


//                 map<char, int> tempFreq;
//                 for (char c : temp)
//                 {
//                     tempFreq[c]++;
//                 }
//                 ll cur = 1;
//                 for (int k = 1; k <= n; ++k)
//                 {
//                     cur *= k;
//                 }
//                 for (auto &p : tempFreq)
//                 {
//                     for (int k = 1; k <= p.second; ++k)
//                     {
//                         cur /= k;
//                     }
//                 }


//                 if (cur < mn)
//                 {
//                     mn = cur;
//                     best = temp;
//                 }
//             }
//         }


//         cout << best << endl;
//     }

//     return 0;
// }

//A. Alyona and a Square Jigsaw Puzzle

//#include<bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    ll t;
//    cin >> t;
//
//
//    vector<ll> res;
//    for (ll j = 1; j * j - 1 <= 10000; j += 2)
//    {
//        res.push_back(j * j - 1);
//    }
//
//    while (t--)
//    {
//        ll n;
//        cin >> n;
//        vector<ll> v(n);
//
//        for (int i = 0; i < n; i++)
//        {
//            cin >> v[i];
//        }
//
//        ll cn = 0;
//        ll sum = -1;
//
//        for (int i = 0; i < n; i++)
//        {
//            sum += v[i];
//            if (binary_search(res.begin(), res.end(), sum))
//            {
//
//                cn++;
//            }
//        }
//        cout << cn << endl;
//    }
//}

//B. Replace Character

#include <bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main()
{
    FAST_IO;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        map<char, int> mp;
        for (char c : s)
        {
            mp[c]++;
        }

        char mx = s[0], mn = s[0];
        for (auto &it : mp)
        {
            if (it.second > mp[mx])
                mx = it.first;
            if (it.second < mp[mn])
                mn = it.first;
        }

        if (mx == mn)
        {

            char replacement = '\0';
            for (auto &it : mp)
            {
                if (it.first != mx && it.second > mp[replacement])
                {
                    replacement = it.first;
                }
            }

            if (replacement != '\0')
            {

                for (int i = 0; i < n; ++i)
                {
                    if (s[i] == mx)
                    {
                        s[i] = replacement;
                        break;
                    }
                }
            }
            cout << s << "\n";
            continue;
        }

        bool ok = false;
        for (int i = 0; i < n; ++i)
        {
            if (!ok && s[i] == mn)
            {
                s[i] = mx;
                ok = true;
            }
        }

        cout << s << "\n";
    }

    return 0;
}
