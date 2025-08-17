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
        cin >> n;
        vector<int>a(n);
        ll f=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<0)
                f=1;
        }
        if(f==1)
        {
            cout<<"NO\n";
            continue;
        }
        //int mn=*min_element(a.begin(),a.end());
        int mx=*max_element(a.begin(),a.end());
        cout<<"YEs\n";
        cout<<mx+1<<endl;
        for(int i=0;i<=mx;i++)
            cout<<i<<' ';
        cout<<endl;
    }
}
