//Prefix sum algorithm
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n+1];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    int pre[n+1];
    pre[0]=ar[0];

    for(int i=1;i<n;i++)
    {
        pre[i]=pre[i-1]+ar[i];
    }

    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        if(l==0)cout<<pre[r]<<endl;
        else cout<<pre[r]-pre[l-1]<<endl;
    }
}*/
//https://www.spoj.com/problems/CSUMQ/
//problem solve .
/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll ar[n+3];
    for(ll i=0;i<n;i++)
        cin>>ar[i];
    ll pr[n+3];
    pr[0]=ar[0];
    for(ll i=1;i<n;i++)
        {
           pr[i]=pr[i-1]+ar[i];
        }
    ll q;
    cin>>q;
    while(q--)
    {
        ll i,j;
        cin>>i>>j;
        if(i==0)
            cout<<pr[j]<<endl;
        else
            cout<<pr[j]-pr[i-1]<<endl;
    }
}*/
//
//Difference Array algorithm
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+3];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int q;
    cin>>q;
    int dif[n+3]={0};
    while(q--)//how many query add
    {
        int l,r,v;//l and r range value v sum
        cin>>l>>r>>v;
        dif[l]+=v;
        dif[r+1]-=v;
    }
    for(int i=1;i<n;i++)
    {
        dif[i]+=dif[i-1];//this technique l to r range all value add v.
    }
    for(int i=0;i<n;i++)
    {
        a[i]+=dif[i];//add value and 1st value sum and ans given;
    }
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<endl;
}
