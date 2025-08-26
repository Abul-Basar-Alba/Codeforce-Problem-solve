#include <bits/stdc++.h>
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
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        ll c=0;
        for(int i=2;i<=n;i++)
        {
            for(int j=i-1;j>=1;j--)
            {
                if(v[j]*v[i]==i+j)
                    c++;
            }
        }
        cout<<c<<endl;
    }
}
