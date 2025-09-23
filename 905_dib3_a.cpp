#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll a=s[0]-'0';
        ll b=s[1]-'0';
        ll c=s[2]-'0';
        ll d=s[3]-'0';
        if(a==0) a=10;
        if(b==0) b=10;
        if(c==0) c=10;
        if(d==0) d=10;
        ll time=abs(1-a)+1;
        time+=abs(a-b)+1;
        time+=abs(b-c)+1;
        time+=abs(c-d)+1;
        cout<<time<<endl;
       /* ll n,sum=0;
        cin>>n;
        while(n!=0)
        {
            ll rem=n%10;
            sum=sum*10+rem;
            n=n/10;
        }
        if(sum==0)
            cout<<13<<endl;
        else
        {
        ll tem=sum;
        ll sum1=0,c=1,rev;
        while(tem!=0)
        {
           ll rem1=tem%10;
           if(rem1==0)
           {
              rem1=10;
           }
           rev=abs(rem1-c);
           sum1=sum1+rev+1;
           c=rem1;
           tem=tem/10;
        }
        cout<<sum1<<endl;
        }*/
    }
}
