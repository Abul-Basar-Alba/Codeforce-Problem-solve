// #include <bits/stdc++.h>
// #define all(v) (v).begin(), (v).end()
// #define srt(v) sort(all(v))
// #define rsrt(v) sort(all(v), greater<ll>())

// using namespace std;
// typedef long long ll;

// void solve()
// {
//     ll n;
//     cin >> n;
//     vector<ll> a(n);
//     set<ll> s;
//     for (ll i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         s.insert(a[i]);
//     }
//     if(s.size() == 1 && *s.begin() != 0)
//     {
//         cout << "Yes\n";
//         return;
//     }
//     if(s.size() <=2)
//     {
//         ll f= *s.begin();
//         ll se= *next(s.begin());
//         if((f==-1||se==-1)&&(f!=0&&se!=0))
//         {
//             cout<<"Yes\n";
//         }
//         else
//         {
//             cout<<"No\n";
//         }
//     }
//     else
//     {
//         cout<<"No\n";
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
    ll n,x;
    cin >> n >> x;
    string s;
    cin >> s;
    x--;
    ll l=0,r=0,f=0,p=-1,d=0;
    for(int i=x+1;i<n;i++)
    {
        if(s[i]=='#'&& f==0)
        {
            r++;
            f=1;
            p=i;
        }
        else if(s[i]=='#' && f==1)
        {
            r++;
        }
        if(f==1 && s[i]=='.')
        {
            r++;
            d=1;
        }
    }
    if(r!=0&&d==0&&p!=-1)
    {
       if(s[p-1]=='.')
       {
              r++;
       }
    }
    f=0,p=-1,d=0;
    for(int i=x-1;i>=0;i--)
    {
        if(s[i]=='#'&& f==0)
        {
            l++;
            f=1;
            p=i;
        }
        else if(s[i]=='#' && f==1)
        {
            l++;
        }
        
        if(f==1 && s[i]=='.')
        {
            l++;
            d=1;
        }
    }
    if(l!=0&&d==0&&p!=-1)
    {
       if(s[p+1]=='.')
       {
              l++;
       }
    }
    if((l==0 && r==0)||(x==0|| x==n-1))
    {
        cout << 1 << '\n';
        return;
    }
    if(l==0&&r!=0)
    {
        cout << 2 << '\n';
        return;
    }
    if(r==0&&l!=0)
    {
        cout << 2 << '\n';
        return;
    }
    l++;
    r++;
    cout << min(l,r) << '\n';

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