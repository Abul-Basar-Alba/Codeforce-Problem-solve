#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        set<int>st;
        ll c=0;
        ll c1=INT_MAX;
        ll cn=0;
        for(int i=0;i<n;i++)
        {
            ll a,x;
            cin>>a>>x;
            if(a==1)
            {
               c=max(c,x);
            }
            else if(a==2)
            {
                c1=min(c1,x);
            }
            else
            {
                st.insert(x);
            }
        }
        if(c>=c1)
        {
          cout<<0<<endl;
          continue;
        }
        ll ans=(c1-c)+1;
        for(auto i:st)
        {
                ans-=(i>=c&&i<=c1);
        }
        cout<<ans<<endl;
    }
}
/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll c = 0;
        ll c1 = INT_MAX;
        ll cn = 0;

        for (int i = 0; i < n; i++) {
            ll a, x;
            cin >> a >> x;
            if (a == 1) {
                c = max(c, x);
            } else if (a == 2) {
                c1 = min(c1, x);
            }
            if (a == 3 && x <= c1 && x >= c)
                cn++;
        }

        if (c >= c1)
            cout << 0 << endl;
        else {
            ll ans = (c1 - c) - max(0LL, cn - 1);
            cout << ans << endl;
        }
    }
    return 0;
}*/

