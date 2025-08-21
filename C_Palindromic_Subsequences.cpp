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
    vector<ll> a;
    a.push_back(1);
    a.push_back(1);
 
    for(int x = 2; x <= n - 3; x++) 
    {
        a.push_back(x);
    }
    a.push_back(1);
    a.push_back(2);

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
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