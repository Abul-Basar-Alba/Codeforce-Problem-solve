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
        ll k, q;
        cin >> k >> q;

        vector<ll> a(k);
        for (int i = 0; i < k;i++)
        {
            cin >> a[i];
        }

        for (int j = 0; j < q;j++)
        {
            ll n;
            cin >> n;

            vector<ll> p(n, 1);
            bool ok= false;

            ll idx = 0;

            while (!ok)
            {
                ok= true;
                for (int i = 0; i < a.size();i++)
                {
                    ll target = a[i];
                    if (target <=p.size())
                    {
                        p[target - 1] = 0;
                        ok = false;
                    }
                }

                p.erase(remove(p.begin(),p.end(), 0),p.end());
            }

            cout <<p.size() << " ";
        }
        cout << endl;
    }

    return 0;
}*/

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
        ll k, q;
        cin >> k >> q;

        vector<ll> a(k);
        for (int i = 0; i < k;i++)
        {
            cin >> a[i];
        }
        vector<ll>v(q);
        for(int i=0;i<q;i++)
            cin>>v[i];
        for(int i=0;i<q;i++)
        {
            cout<<min(v[i],a[0]-1)<<' ';
        }
        cout<<endl;
    }
}


