#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    ll t;
    cin >> t;
    while (t--) 
    {
        ll n, a, b;
        cin >> n >> a >> b;
        if (b >= n) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            if ((n - b) % 2 != 0) 
            {
                cout << "NO" << endl;
            } 
            else 
            {
                if (a <= b || a >= n) 
                {
                    cout << "YES" << endl;
                } 
                else if (a >= b + 2 && (n - a) % 2 == 0) 
                {
                    cout << "YES" << endl;
                } 
                else 
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
    return 0;
}