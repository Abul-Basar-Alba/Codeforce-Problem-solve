#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() 
{
    ll t;
    cin >> t;
    while (t--) 
    {
        ll a, b;
        cin >> a >> b;
        if (a == b) 
        {
            cout << 0 << "\n";
        }
        else if (a % b == 0 || b % a == 0) 
        {
            cout << 1 << "\n";
        }
        else 
        {
            cout << 2 << "\n";
        }
    }
    return 0;
}
