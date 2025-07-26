/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            v.push_back(make_pair(x,y));
        }
        map<int,int>fq;
        for(const auto&p:v)
        {
            fq[p.first]++;
            fq[p.second]++;
        }
        int ans=0;
        for(const auto&fp:fq)
        {
            if(fp.second==1)
                ans++;
        }
        cout<<(ans+1)/2<<endl;
    }
}*/
#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vector<pair<ll,ll>> v;

        for (ll i = 0; i < n-1; i++)
        {
            ll x, y;
            cin >> x >> y;
            v.push_back(make_pair(x, y));
        }

        map<ll,ll> fq;

        for (const auto& p : v)
        {
            fq[p.first]++;
            fq[p.second]++;
        }

        ll ans = 0;

        for (const auto& fp : fq)
        {
            if (fp.second == 1)
                ans++;
        }

        cout << (ans + 1) / 2 << endl;
    }

    return 0;
}

