// #include <bits/stdc++.h>
// #define all(v) (v).begin(), (v).end()
// #define srt(v) sort(all(v))
// #define rsrt(v) sort(all(v), greater<ll>())

// using namespace std;
// typedef long long ll;

// void solve()
// {
//     ll n;
//     cin>>n;
//     ll x=1;
//     cout<<x<<" ";
//     for(ll i=2;i<=n;i++)
//     {
//         x+=2;
//         cout<<x<<" ";
//     }
//     cout<<endl;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// #define all(v) (v).begin(), (v).end()
// #define srt(v) sort(all(v))
// #define rsrt(v) sort(all(v), greater<ll>())

// using namespace std;
// typedef long long ll;

// void solve()
// {
//     string s;
//     cin >> s;
//     ll n=s.length();
//     if(n==1)
//     {
//         cout<<-1<<endl;
//     }
//     else
//     {
//         string s1="";
//         for(ll i=0;i<n-1;i++)
//         {
//             if(s[i]==s[i+1])
//             {
//                 s1+=s[i];
//                 s1+=s[i+1];
//                 break;
//             }
//         }
//         if(s1.length()>0)
//         cout<<s1<<endl;
//         else if(n==2&&s[0]!=s[1])
//         {
//             cout<<-1<<endl;
//         }
//        else{
//            for(ll i=0;i<n-1;i++)
//            {
//             if(s[i]!=s[i+1]&&s[i+1]!=s[i+2]&&s[i]!=s[i+2]&&i+2<n)
//             {
//                 s1+=s[i];
//                 s1+=s[i+1];
//                 s1+=s[i+2];
//                 break;
//             }
//            }
//            if(s1.length()>0)
//             cout<<s1<<endl;
//         else
//            cout<<-1<<endl;
//        }
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
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
    ll x, m;
    cin >> x >> m;
    ll cnt=0;
    for(int y=1;y<=min(2*x,m);y++)
    {
        ll n=x^y;
        if(n!=0&&(x%n==0||y%n==0))
        {
            cnt++;
        }
    }
    cout << cnt << endl;
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