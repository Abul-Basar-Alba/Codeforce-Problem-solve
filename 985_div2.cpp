#include <bits/stdc++.h>
#define ll ll
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) 
    {
        ll n;
        cin >> n;
        string s, r;
        cin >> s >> r;
        
        ll one = 0, zero = 0;
        for (char c : s)
        {
            if (c == '0')
                zero++;
            else if (c == '1')
                one++;
        }
        
        bool ok = true;
        for (char c:r)
        {
            if (c == '0')
            {
                if (one > 0 && zero>0)
                {
                    one--;
                    
                }
                else
                {
                    ok = false;
                    break;
                }
            }
            else if (c == '1')
            {
                
                if (zero > 0 && one>0)
                {
                    zero--;
                    
                }
                else
                {
                    ok = false;
                    break;
                }
            }
        }
        
        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
