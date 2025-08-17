#include <bits/stdc++.h>
using namespace std;
#define ll ll int

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;
        
        if(n<5)
        {
            cout<<0<<endl;
            continue;
        }
        ll cn=0;

        ll tem=sqrt((n+(n-1)));
        
        for(int i=3;i<=tem;i+=2)
        {
          cn++;
        }
        cout<<cn<<endl;
        
    }
    return 0;
}
