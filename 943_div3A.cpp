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
        ll n;
        cin>>n;
        ll y=n-1;
        cout<<y<<endl;
    }
}*/

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
        ll n,m;
        cin>>n>>m;
        string a, b;
        cin >> a >> b;

        ll k= 0;
        ll i = 0, j = 0;

        while (i < n && j < m)
        {
            if (a[i] == b[j])
            {
                k++;
                i++;
            }
            j++;
        }

        cout <<k<< endl;
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
    //cout<<"safety"<<endl;
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ans=100001;
        cout<<ans<<' ';
        for(int i=1;i<n;i++)
        {
            ll x;
            cin>>x;
            ans+=x;
            cout<<ans<<' ';
        }
        cout<<endl;
    }

    return 0;
}
