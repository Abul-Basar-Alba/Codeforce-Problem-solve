// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main() 
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t;
//     cin >> t;
//     while (t--) 
//     {
//         ll x,y,k;
//         cin >> x >> y >> k;
//         ll mn=min(x, y);
//         mn=min(mn, k);
//         cout<<0<<" "<<0<<" "<<mn<<" "<<mn<<endl;
//         cout<<0<<" "<<mn<<" "<<mn<<" "<<0<<endl;
//     }
// }


// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll t;
//     cin >> t;
//     while (t--) 
//     {
        
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
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        if(n == 1) 
        {
            cout << 1 << "\n";
            return;
        }

        if(n % 2 == 0) 
        {
            ll ans = 0;
            for(int i = 0; i < n; i += 2) 
            {
                ans = max(ans, a[i+1] - a[i]);
            }
            cout << ans << "\n";
        }
        else 
        {
       
            ll k = LLONG_MAX;

            for(int i = 0; i < n; i++) 
            {
                ll mx = 0;
                
                ll cnt = 0;
                ll prev = -1;
                for(int j = 0; j < n; j++) 
                {
                    if(j == i) 
                    continue;
                    if(cnt % 2 == 0) 
                    {
                       
                        prev = a[j];
                    } 
                    else 
                    {
                        ll gap= a[j] - prev;
                        mx = max(mx, gap);
                    }

                    cnt++;
                }
                k = min(k, mx);
            }
            cout << k << "\n";
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

