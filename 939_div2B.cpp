/*#include<bits/stdc++.h>
#define ll ll int
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

        vector<ll>v(n);
        for (int i = 0; i < n;i++)
        {
            cin >>v[i];
        }

       set<ll>s;

        ll mx= 0;
        for (int i = 0; i < n;i++)
        {
            if (s.count(v[i]))
            {
                mx++;
                s.erase(v[i]);
            }
            else
            {
                s.insert(v[i]);
            }
        }

        cout <<mx<< endl;
    }

    return 0;
}
*/

#include<bits/stdc++.h>
#define ll ll int
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

        vector<ll>v(n);
        map<ll,ll>mp;
        for (int i = 0; i < n;i++)
        {
            cin >>v[i];
            mp[v[i]]++;
        }
        ll ans=0;
        for(auto i:mp)
        {
            if(i.second>=2)
                ans++;
        }
        cout<<ans<<endl;
    }
}
