/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+2];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            int x=abs(a[i]);
            sum+=x;
        }
        cout<<sum<<endl;
    }
}*/
#include <bits/stdc++.h>
#define ll ll int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        ll n,d;
        cin>>n>>d;
        string s=to_string(d);
        ll rem=d%n;
        while(1)
        {
            //s+=d;
            //ll x=0;
            rem= (rem* 10 + d) % n;
            s+= to_string(d);
            if(rem==0)
                break;
        }
        cout<<"Case "<<i<<":"<<s.size()<<endl;
    }
}
