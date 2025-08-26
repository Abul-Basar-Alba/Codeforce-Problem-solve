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
        if(n==1)
            cout<<n<<endl;
        else if(n%2==0)
        {
            for(int i=2,j=1;i<=n;i+=2,j+=2)
                cout<<i<<' '<<j<<' ';
            cout<<endl;
        }
        else
            cout<<-1<<endl;
    }
}
