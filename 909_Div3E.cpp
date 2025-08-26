#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll v[n+3];
        ll mn=INT_MAX;
        ll pos=-1;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]<mn)
            {
                mn=v[i];
                pos=i;
            }
        }
        int c=0;
        for(int i=pos+1;i<n;i++)
        {
            if(v[i]<v[i-1])
            {
                //cout<<-1<<endl;
                 c++;
                 break;
            }
        }
        if(c==0)
        cout<<pos<<endl;
        else
         cout<<-1<<endl;
    }
}
