#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<"safety"<<endl;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,b,s;
        cin>>n>>k>>b>>s;
        ll p[n+2],a[n+2];
        for(int i=1;i<=n;i++)
            cin>>p[i];
        for(int i=1;i<=n;i++)
            cin>>a[i];
        ll sumb=0;
        ll sums=0;
        ll mxb=0;
        ll mxs=0;
        for(int i=1;i!=n+1&&k>=i;++i)
        {
            sumb+=a[b];
            ll tem=sumb;
            tem+=((k-i)*a[b]);
            mxb=max(mxb,tem);
            sums+=a[s];
            ll tems=sums;
            tems+=((k-i)*a[s]);
            mxs=max(mxs,tems);
            b=p[b];
            s=p[s];
        }

        if(mxb>mxs)
           cout<<"Bodya\n";
        else if(mxs>mxb)
            cout<<"Sasha\n";
        else
         cout<<"Draw\n";

    }

}

/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<"safety"<<endl;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,b,s;
        cin>>n>>k>>b>>s;

        //vector<ll> p(n + 1);
        //vector<ll> a(n + 1);
        ll p[n+2],a[n+2];

        for(int i = 1; i<=n;i++)
        {
            cin >> p[i];
        }

        for(int i = 1; i<=n;i++)
        {
            cin >> a[i];
        }

        ll mxb= 0;
        ll mxs= 0;

        ll sumb= 0;
        ll sums= 0;

        for(int i = 1; i != n + 1 && k >= i; ++i)
        {
            sumb += a[b];
            sums += a[s];

            mxb= max(mxb, sumb + (k - i) * a[b]);
            mxs= max(mxs, sums + (k - i) * a[s]);

            b = p[b];
            s = p[s];
        }

        if(mxb>mxs)
        {
            cout << "Bodya\n";
        }
        else if(mxs>mxb)
        {
            cout << "Sasha\n";
        }
        else
        {
            cout << "Draw\n";
        }
    }

    return 0;
}*/

