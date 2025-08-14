#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll a, b;
    if (!(cin >> a >> b)) return 0;

    if (a == b) 
    {
        cout << 1 << '\n' << a << '\n';
    } 
    else 
    {
        ll c = 3*a - 2*b;
        cout << 3 << '\n';
    
        cout << b << ' ' << b << ' ' << c << '\n';
    }
    return 0;
}
