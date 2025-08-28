// #include<bits/stdc++.h>
// #define ll ll int
// using namespace std;
// int main()
// {
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//        ll n;
//        cin>>n;
//        string s;
//        cin>>s;

//        bool is_good = false;

//                if (s[0] != s[n - 1])
//                {
//                    is_good = true;
//                }

//        if (is_good)
//            cout << "YES" << endl;
//        else
//            cout << "NO" << endl;
//    }
// }


// #include <bits/stdc++.h>
// #define ll ll int
// using namespace std;

// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         vector<ll> a(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         if (n == 1)
//         {
//             cout << a[0] << endl;
//             continue;
//         }
//         sort(a.begin(),a.end());
//         ll x=(n/2);
//         ll res=a[x];
//         cout << res << endl;
//     }
// }

//#include <bits/stdc++.h>
//#define ll ll int
//using namespace std;
//
//int main()
//{
//    ll t;
//    cin >> t;
//
//    while (t--)
//    {
//        ll n;
//        cin >> n;
//        string s;
//        cin >> s;
//
//        sort(s.begin(),s.end());
//
//        reverse(s.begin(),s.end());
//        cout<<s<<endl;
//    }
//
//    return 0;
//}


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
 
        ll count[26] = {0};  
        for (int i = 0; i < n; ++i) 
        {
            count[s[i] - 'a']++;
        }
 
        string result = "";
 
        while (n > 0) 
        {
            for (int i = 0; i < 26; ++i) 
            {
                if (count[i] > 0)
                {
                    result += ('a' + i);
                    count[i]--;
                    --n;
                }
            }
        }
 
        cout << result << "\n";
    }
 
    return 0;
}