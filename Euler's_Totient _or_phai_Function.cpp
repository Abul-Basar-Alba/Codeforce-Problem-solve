#include <bits/stdc++.h>
#define ll ll int
using namespace std;
void phai(ll n)
{
 ll ans=n;
 for(int i=2;i*i<=n;i++)
 {
    if(n%i==0)
    {
        ll cnt=0;
        while(n%i==0)
        {
            n/=i;
            //cnt++;
        }
        ans*=(i-1);
        ans/=i;
        //cout<<i<<"^"<<cnt<<endl;
    }
 }
 if(n>1)
 {
    //cout<<n<<"^"<<1<<endl;
    ans*=(n-1);
    ans/=n;
 }
 cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//co-prime ninnoy 
    ll n;
    cin >> n;
    phai(n);
}