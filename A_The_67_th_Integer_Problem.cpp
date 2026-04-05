#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(all(v), greater<ll>())

using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin>>n;
    if(n>=0&&n<67)
    {
        cout<<n+1<<endl;
    }
    else if(n==67)
    {
        cout<<67<<endl;
    }
    else if(n<0&&n>-67)
    {
        cout<<-n+1<<endl;
    }
    else if(n==-67)
    {
        cout<<-67<<endl;
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
        solve();
    }
    return 0;
}