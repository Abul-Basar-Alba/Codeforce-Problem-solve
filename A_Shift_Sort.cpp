


#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void Basar()
{
    ll n;
    string s;
    cin >> n >> s;
    ll cnt0 = 0;
    for (char c : s) 
    {
        if (c == '0') 
        {
            cnt0++;
        }
    }
    ll one = 0;
    for (int i = 0; i < cnt0; i++) 
    {
        if (s[i] == '1') 
        {
            one++;
        }
    }
    cout << one << endl;

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


