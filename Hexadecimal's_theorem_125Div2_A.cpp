/*#include<bits/stdc++.h>
#define ll ll int
using namespace std;
int main()
{
    ll n;
    cin>>n;
    cout<<0<<' '<<0<<' '<<n;
}
*/
//Hence, x to be a Fibonacci number, 5*x^2+4 or 5*x^2-4 must be a perfect square.
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
       ll x=sqrt((5*n*n)+4);
       ll y=sqrt((5*n*n)-4);
       if((x*x)==((5*n*n)+4))
        cout<<"IsFibo"<<endl;
       else if((y*y)==((5*n*n)-4))
        cout<<"IsFibo"<<endl;
       else
        cout<<"IsNotFibo"<<endl;
    }
}
