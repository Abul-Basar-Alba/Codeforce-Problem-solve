#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    /*ll n;
    cin>>n;
    set<ll>s;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(auto it:a)
    {
        s.insert(it);
    }
    cout<<s.size()-1<<endl;*/
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<ll>q;
    for(ll i=0;i<n+1;i++)
    {
        for(ll j=i;j<n+1;j++)
        {
            ll min=a[i];
            if(a[i]>a[j+1])
            {
                min=a[j+1];
                q.push_back(min);
            }
        }
    }
    for(ll k=0;k<q.size();k++)
    {
        cout<<q.at(k)<<" ";
    }


}


