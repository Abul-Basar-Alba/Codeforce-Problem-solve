/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,m,i,j;
        cin>>n>>m>>i>>j;
        cout<<1<<' '<<1<<' '<<n<<' '<<m<<endl;
    }
}*/
#include<bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+2];
        double sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum<=0||sum<n)
            cout<<1<<endl;
        else if(sum/(double)n==1)
            cout<<0<<endl;
        else
        {
            cout<<abs(sum-n)<<endl;
        }
    }
}
