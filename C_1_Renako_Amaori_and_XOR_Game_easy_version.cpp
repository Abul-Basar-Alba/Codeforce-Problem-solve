#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void Basar() 
{
    ll n;
    cin >> n;
    vector<ll>a(n+1), b(n+1);

    for(int i = 1; i <= n; i++) 
    cin >> a[i];
    for(int i = 1; i <= n; i++) 
    cin >> b[i];

    ll S = 0;
    ll last_diff = -1;

    for(int i = 1; i <= n; i++) 
    {
        ll d = a[i] ^ b[i];
        S ^= d;
        if(d == 1) 
        last_diff = i;
    }

    if(S == 0) 
    {
        cout << "Tie\n";
    } 
    else 
    {
        if(last_diff % 2 == 1) 
        cout << "Ajisai\n";
        else 
        cout << "Mai\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--) 
    Basar();
}
