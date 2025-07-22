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
        vector<ll> g(n);
         set<ll>st;
         st.insert(0);
         ll sum=0;
         bool ok=false;
        for (int i = 0; i < n; i++)
        {
            cin >> g[i];
            if(i%2==0)
                g[i]*=-1;
            sum+=g[i];
            if(st.find(sum)!=st.end())
                ok=true;
            st.insert(sum);

        }
        if(ok==true)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }

    return 0;
}
/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;

string cn(int n, vector<int>& g)
{
    map<ll, int> prefixSum;
    ll odd= 0, even= 0;
    prefixSum[0] = -1;

    for (int i = 0; i < n;i++)
    {
        if (i % 2 == 0)
        {
            even+= g[i];
        }
       else
        {
            odd+= g[i];
        }

        ll diff = even-odd;
        if (prefixSum.find(diff) != prefixSum.end())
        {
            if (i - prefixSum[diff] >= 2)
            {
                return "YES";
            }
        }
        else
        {
            prefixSum[diff] = i;
        }
    }

    return "NO";
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        vector<int> g(n);

        for (int i = 0; i < n;i++)
        {
            cin >> g[i];
        }

        string r= cn(n, g);
        cout << r<< endl;
    }

    return 0;
}*/
