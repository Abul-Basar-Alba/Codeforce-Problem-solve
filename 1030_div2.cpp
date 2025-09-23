

// #include <bits/stdc++.h>
// #define all(v) (v).begin(), (v).end()
// #define srt(v) sort(all(v))
// #define rsrt(v) sort(all(v), greater<ll>())

// using namespace std;
// typedef long long ll;

// void Basar()
// {
//     ll n;
//     cin>>n;
//     cout<<2*n<<endl;
//     for(int i=1;i<=n;i++)
//     {
//         ll l1=1;
//         ll r1=n-i+1;
//         cout<<i<<" "<<l1<<" "<<r1<<endl;

//         ll l2=n-i+2;
//         if(l2>n) l2=n;
//         cout<<i<<" "<<l2<<" "<<n<<endl;
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
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n),v;
    for(ll i=0;i<n;i++) 
    cin>>a[i];
    ll res=0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<61;j++)
        {
            if((a[i]>>j)&1)
            {
                res++;
                continue;
            }
            else
            v.push_back(j);
        }
    }
    sort(all(v));
    for(auto &x : v)
    {
        ll need=(1LL<<x);
        if(need<=k)
        {
            res++;
            k-=need;
        }

    }
    cout<<res<<endl;

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