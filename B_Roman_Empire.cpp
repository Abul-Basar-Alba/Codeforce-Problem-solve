#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void Basar()
{
    ll n; 
    cin >> n;
    vector<ll> val= {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    vector<string> s= {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    string res;
    for (ll i = 0; i < val.size(); i++) 
    {
        while (n >= val[i])
        {
            res += s[i];
            n -= val[i];
        }
    }
    cout << res << "\n";
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
