#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    ll p=(sum%(n+1));
    ll cn=0;
    for(int i=1;i<=5;i++)
    {
        p+=1;
        if(p>n+1)
            p=1;
        else if(p!=1)
            cn++;
    }
    cout<<cn<<endl;
}
