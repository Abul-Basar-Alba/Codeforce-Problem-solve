#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void Basar()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    string ck="2025";
    string zero="2026";
    if(s.find(zero)!=string::npos)
    {
        cout<<0<<"\n";
        return;
    }
    if(s.find(ck)!=string::npos)
    {
        cout<<1<<"\n";
    }
    else
    {
        cout<<0<<"\n";
    }
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