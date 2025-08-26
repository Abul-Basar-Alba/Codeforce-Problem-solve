#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll mov=0;
        int mx=0,mnx=0,my=0,mny=0;
        for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            mx=max(x,mx);
            mnx=min(x,mnx);
            my=max(y,my);
            mny=min(y,mny);
        }
        mov=2*(abs(mx)+abs(mnx)+abs(my)+abs(mny));
        cout<<mov<<endl;
    }
}
