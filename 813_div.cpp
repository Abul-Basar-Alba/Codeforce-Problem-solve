#include <bits/stdc++.h>
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
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (is_sorted(a.begin(), a.end()))
        {
            cout << 0 << endl;
            continue;
        }

        map<ll, ll> pos;
        for (int i = 0; i < n; i++)
        {
            pos[a[i]] = i;
        }
        ll f=-1,ind=-1;
        for(int i=0;i<n-1;i++)
        {
            ind=max(ind,pos[a[i]]);
            if(a[i]>a[i+1])
            {
               f=max(f,ind);
            }
        }
        set<ll>st;
        for(int i=0;i<=f;i++)
        {
            st.insert(a[i]);
        }
        cout<<st.size()<<endl;

        // for (auto it : pos)
        // {
        //     cout << it.first << " " << it.second << endl;
        // }
    }

    return 0;
}
