#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;

        string s = "";
        ll f = 0;
        for(char i = 'a'; i <= 'z'; i++)
        {
            if(f != b)
            {
                s += i;
                f++;
            }
        }
        while(s.size() < n)
        {
            s += s;
        }
        if(s.size() > n)
        {
            ll x = s.size() - n;
            s.erase(n, x);
        }
        cout << s << endl;
    }
}
