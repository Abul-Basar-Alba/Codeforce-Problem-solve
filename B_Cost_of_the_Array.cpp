#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() 
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n+1);
    for(ll i = 1; i <= n; i++) 
    {
        cin >> a[i];
    }

    if(n == k) 
    {

        vector<ll> b;
        for(int i = 2; i <= n; i += 2) 
        {
            b.push_back(a[i]);
        }
        b.push_back(0);
        for(int i = 0; i < b.size(); i++) 
        {
            if(b[i] != i+1) 
            {
                cout << i+1 << "\n";
                return;
            }
        }
    }
    else 
    {
    
        bool allone = true;
 
        for(int i = 2; i <= n - k + 2; i++) 
        {
            if(a[i] != 1) 
            {
                allone = false;
                break;
            }
        }
        if(allone) 
        {
            cout << 2 << "\n";
        }
        else 
        {
            cout << 1 << "\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--) solve();
    return 0;
}
