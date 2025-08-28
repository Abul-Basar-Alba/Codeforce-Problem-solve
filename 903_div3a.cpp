#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a[3];
        cin>>a[0];
        cin>>a[1];
        cin>>a[2];
        sort(a,a+3);
        if(a[0]==a[1]==a[2])
            cout<<"YES\n";
        else if(a[0]==a[1]&&a[2]%a[0]==0&&a[2]<=(a[0]*4))
           cout<<"YES\n";
        else if(a[1]==a[2])
                {
                    if(a[2]==a[0]*2)
                    cout<<"YES\n";
                    else
                    cout<<"No\n";
                }
        else if(a[2]<=(a[0]*3)&&a[2]%a[0]==0&&a[1]%a[0]==0)
            cout<<"YES\n";
        else
           cout<<"NO\n";
    }
}
