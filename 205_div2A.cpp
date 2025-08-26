#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll ax[n];
    ll s1=0;
    ll ay[n];
    ll s2=0;
    for(int i=0;i<n;i++)
    {
        cin>>ax[i];
        s1+=ax[i];
        cin>>ay[i];
        s2+=ay[i];
    }
    ll ans=0;
    int cn=0;
    if( s1%2==0 && s2%2==0)
        cout<<ans<<endl;
    else if((s1%2==0&&s2%2==1)||(s1%2==1&&s2%2==0))
        cout<<-1<<endl;
    else
    {
        for(int i=0;i<n;i++)
        {
            if((ax[i]%2==0&&ay[i]%2==1)||(ax[i]%2==1&&ay[i]%2==0))
            {
                cout<<ans+1<<endl;
                break;
            }
            cn++;
        }
        if(cn==n)
            cout<<-1<<endl;
    }
}
