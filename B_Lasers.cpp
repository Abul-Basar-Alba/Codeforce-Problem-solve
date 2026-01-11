// #include <bits/stdc++.h>
// using namespace std;
// int main() 
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t; 
//     if(!(cin >> t)) return 0;
//     while(t--) {
//         
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
        ll n,m,x,y;
        cin >> n >> m >> x >> y;
        for(int i=0;i<n;i++)
        { 
            ll tmp; 
            cin >> tmp; 
        }
        for(int i=0;i<m;i++)
        { 
            ll tmp; 
            cin >> tmp; 
        } 
        cout << (n + m) << '\n';
    
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