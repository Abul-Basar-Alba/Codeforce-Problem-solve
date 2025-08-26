/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n+3];
        ll sum=1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum*=a[i];
        }
        if(2023%sum!=0)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
            cout<<2023/sum<<' ';
            for(int i=0;i<k-1;i++)
            {
                cout<<1<<' ';
            }
            cout<<endl;
        }

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
        ll a, b;
        cin >> a >> b;
        ll lcm=(a*b)/(__gcd(a,b));
        if(lcm==b)
        {
            lcm*=(b/a);
        }
            cout<<lcm<<endl;
        }
    return 0;
}



