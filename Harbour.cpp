#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y,n;
        cin>>x>>y>>n;
        ll dif=(n-2*n-1);
        ll d=n-2;
        vector<ll>v;
        ll sum=y;
        if(y==n)
            cout<<-1<<endl;
        else if((y-x)>=dif)
        {
            for(int i=1;i<=d;i++)
            {
                sum-=i;
                v.push_back(sum);
            }
            sort(v.begin(),v.end());
            cout<<x<<' ';
            for(int i=0;i<v.size();i++)
            {
                cout<<v[i]<<' ';
            }
            cout<<y<<endl;
        }
        else
            cout<<-1<<endl;

    }
}
