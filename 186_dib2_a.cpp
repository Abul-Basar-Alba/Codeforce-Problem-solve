#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    if(t>0)
        cout<<t<<endl;
    else
    {
       ll n=t;
        ll rem1=abs(n%10);
        n=n/10;
        ll rem2=abs(n%10);
        n=n/10;
        if(rem1>rem2)
            cout<<(t+rem1)/10<<endl;
        else
            cout<<((t+10*rem2)/10)-rem1<<endl;
    }
}
