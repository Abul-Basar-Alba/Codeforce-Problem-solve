

#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    ll t;
    cin >> t;
    while (t--) 
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> s(n), t_vec(n);
        for (int i = 0; i < n; i++) 
        cin >> s[i];
        for (int i = 0; i < n; i++) 
        cin >> t_vec[i];
        
        double score = 0.0;
        for (int i = 0; i < n; i++) 
        {
            ll d = t_vec[i] - s[i];
            score += 1.0 / (d + 1);
        }

        double avg = score / n;
        cout  << avg << '\n';
    }
    
    return 0;
}