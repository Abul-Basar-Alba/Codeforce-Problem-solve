#include <bits/stdc++.h>
#define ll ll
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll q; 
    cin >> q;

    while (q--) 
    {
        string s,t;
        cin >> s >> t;
        if(s.size() > t.size())
        {
          swap(s, t);
        }
        ll n = s.size(), m = t.size();
        ll f=0;
        for(ll i=0;i<m;i++)
        {
            if(s[i]!= t[i])
            {
                f = i;
                break;
            }
        }
        if(f!=0)
        n+=(m-f)+1;
        else if(s==t)
        {
            n ++;
        }
        else
        {
            n += m;
        }
        cout << n << "\n";
    }
}


