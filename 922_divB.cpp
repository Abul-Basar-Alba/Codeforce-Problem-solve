/*#include <bits/stdc++.h>
using namespace std;
using ll = ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+2];
        ll b[n+2];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        reverse(a,a+n);
        sort(b,b+n);
        //reverse(b,b+n);
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<' ';
        }
        cout<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<b[i]<<' ';
        }
        cout<<endl;
    }
}*/
/*#include <bits/stdc++.h>
using namespace std;
using ll = ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
            reverse(s.begin(),s.end());
        for(int i=0;i<s.size();i++)
        {
            cout<<s[i]<<' ';
        }
        cout<<endl;
    }
}*/

#include <bits/stdc++.h>
using namespace std;
using ll = ll;

void solve(vector<pair<ll, ll>>& p)
{
    sort(p.begin(), p.end());

    for (int i = 0; i < p.size(); i++)
    {
        cout << p[i].first << " ";
    }
    cout << endl;

    for (int i = 0; i < p.size(); i++)
    {
        cout << p[i].second << " ";
    }
    cout << endl;
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> a(n), b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vector<pair<ll, ll>> p;

        for (int i = 0; i < n; i++)
        {
            p.push_back({a[i], b[i]});
        }

        solve(p);
    }

    return 0;
}
