#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll N=1000000;

    vector<bool>mark(N);
    mark[0]=mark[1]=1;
    for(int i=4;i<N;i+=2)
       mark[i]=1;
    for(int i=3;i<N;i+=2)
    {
        for(int j=i*i;j<N;j+=(2*i))
        {
            mark[j]=1;
        }
    }
    /*vector<bool>mark(N);
    //vector<ll>v;
    mark[0]=1;
    for(ll i=2;i*i<=N;i++)
    {
        if(mark[i]==0)
        {
            for(ll j=i*i;j<=N;j+=i)
            {
                mark[j]=1;
            }
        }
    }*/
    /*for(ll i=2;i<=N;i++)
    {
        if(mark[i]==0)
        v.push_back(i);
    }*/
    ll t;
    cin>>t;
    while(t--)
    {
        ll x;
        cin>>x;
        ll sq=sqrt(x);
        if(x==1)
            cout<<"NO\n";
        else if((sq*sq)==x && mark[sq]==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
