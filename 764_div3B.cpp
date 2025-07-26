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
        ll a,b,c;
        cin>>a>>b>>c;
        if((a==b&&b==c)||(a==b&&c==1)||(b==c&&a==1)||(a==1&&c==1))
            cout<<"YES\n";
        else if(abs(a-b)==abs(b-c))
            cout<<"YES\n";
        else
        {
            ll f=0;
            ll mn=min(a,min(b,c));
            ll i=1;
            while(1)
            {
              mn*=i;
              if(abs(a-b)==abs(b-c))
              {
                f=1;
                break;
              }
              if(abs(a-b)<abs(b-c))
                break;
                i++;
            }
            if(f==1)
                cout<<"YES\n";
             else
             cout<<"NO\n";
        }
    }
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
        ll a, b, c;
        cin >> a >> b >> c;
        if((2*b-c)>0&&(2*b-c)%a==0)
            cout<<"YES\n";
        else if((2*b-a)>c&&(2*b-a)%c==0)
            cout<<"YES\n";
        else if((a+c)>0&&(a+c)%(2*b)==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
