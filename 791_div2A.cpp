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
        ll mx=0;
        ll mn=0;
        if(n%2!=0||n<4)
        {
            cout<<-1<<endl;
        }
        else
        {
            mx=n/4;
             if(n%6==2||n%6==4)
               mn=(n/6)+1 ;
            else if(n%6==0)
                mn=(n/6);

            cout<<mn<<' '<<mx<<endl;
        }

    }
}
